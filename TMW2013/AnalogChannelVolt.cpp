#include "AnalogChannelVolt.h"
#include <math.h>

static const float rev = 5.0;
static const float halfrev = rev/2;
static const float zerocrosslow = 1.0;
static const float zerocrosshigh = rev-zerocrosslow;
static const float scale = rev/(4.8-.2);


AnalogChannelVolt::AnalogChannelVolt(UINT8 modulenumber, UINT32 channel)
  : AnalogChannel(modulenumber, channel)
{
    m_count = new Counter();
    m_trig = new AnalogTrigger(modulenumber, channel);

    m_count->SetUpSource(m_trig, AnalogTriggerOutput::kRisingPulse);
    m_count->SetDownSource(m_trig, AnalogTriggerOutput::kFallingPulse);
    m_count->SetUpDownCounterMode();

    m_count->Start();
}

float AnalogChannelVolt::GetAverageVoltage()
{
    return GetVoltage();
}

void AnalogChannelVolt::ResetTurns()
{
    m_count->Reset();
}

float AnalogChannelVolt::GetVoltage()
{
  float temp = AnalogChannel::GetVoltage();
  temp = (((temp - halfrev) * scale) + halfrev);  // scale 
  if(temp < 0) temp = 0; // min
  if(temp > rev) temp = rev; // max
  temp = (temp / 2.0) + ((m_count->Get() % 2) * halfrev); // half scale
  temp = rev - temp; // inverse
  return temp;
}

int AnalogChannelVolt::getturns()
{
    return m_count->Get();
}
double AnalogChannelVolt::PIDGet()
{
  return GetVoltage();
}

AnalogChannelVolt::~AnalogChannelVolt()
{
  delete m_trig;
  delete m_count;
}
