#include "AnalogChannelVolt.h"
#include <Notifier.h>
#include <Synchronized.h>
#include <math.h>

static const float period = 0.05;
static const float invperiod = 1/period;
static const float rev = 5.0;
static const float halfrev = rev/2;
static const float zerocrosslow = 1.0;
static const float zerocrosshigh = rev-zerocrosslow;
static const float scale = rev/(4.8-.2);


AnalogChannelVolt::AnalogChannelVolt(UINT8 modulenumber, UINT32 channel)
  : AnalogChannel(modulenumber, channel) , m_semaphore (0)
{
    m_semaphore = semMCreate(SEM_Q_PRIORITY);
    m_controlLoop = new Notifier(AnalogChannelVolt::CallCalculate, this);

    m_turns = 0;
    m_current = 0;
    m_turns = 0;
    m_rate = 0;
    m_controlLoop->StartPeriodic(period);
}

void AnalogChannelVolt::CallCalculate(void *controller)
{
   AnalogChannelVolt *control = (AnalogChannelVolt*) controller;
   control->Calculate();
}

void AnalogChannelVolt::Calculate()
{
  CRITICAL_REGION(m_semaphore)
  {
    m_last = m_current;
    m_current = AnalogChannel::GetAverageVoltage();

    m_rate = (m_current - m_last); 
    if (m_rate > halfrev)
      m_rate = rev - m_rate;
    else if (m_rate < -halfrev)
      m_rate = -rev + m_rate;
    m_rate = m_rate / rev * invperiod; // revs per second

    if (m_last > zerocrosshigh && m_current < zerocrosslow)
      m_turns++;
    else if( m_last < zerocrosslow && m_current > zerocrosshigh)
      m_turns--;

  }
  END_REGION;
}

float AnalogChannelVolt::GetAverageVoltage()
{
  return GetVoltage();
}

void AnalogChannelVolt::ResetTurns()
{
  CRITICAL_REGION(m_semaphore)
  {
    m_turns = 0;
  }
  END_REGION;
}

float AnalogChannelVolt::GetVoltage()
{
  float temp;
  CRITICAL_REGION(m_semaphore)
  {
    temp = m_current; 
  }
  END_REGION;
  temp = (((temp - halfrev) * scale) + halfrev);  // scale 
  if(temp < 0) temp = 0; // min
  if(temp > rev) temp = rev; // max
  temp = (temp / 2.0) + ((m_turns % 2) * halfrev); // half scale
  temp = rev - temp; // inverse
  return temp;
}

float AnalogChannelVolt::getrate()
{
  CRITICAL_REGION(m_semaphore)
  {
    return m_rate;
  }
  END_REGION;
}

float AnalogChannelVolt::getturns()
{
  CRITICAL_REGION(m_semaphore)
  {
    return m_turns;
  }
  END_REGION;
}
double AnalogChannelVolt::PIDGet()
{
  return GetVoltage();
}

AnalogChannelVolt::~AnalogChannelVolt()
{
  semFlush(m_semaphore);
  delete m_controlLoop;
}
