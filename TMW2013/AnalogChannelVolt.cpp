#include "AnalogChannelVolt.h"
#include <math.h>

static const float rev = 5.0;
static const float halfrev = rev/2;
static const float scale = rev/(4.8-.2);
static const int   ratio = 2; // ratio of pot to finished gear, must be int

#define INV

AnalogChannelVolt::AnalogChannelVolt(UINT8 modulenumber, UINT32 channel)
  : AnalogChannel(modulenumber, channel)
{
    m_module = modulenumber;
    m_channel = channel;
    this->GetModule()->SetSampleRate(1000);

    m_trig = new AnalogTrigger(modulenumber, channel);
    m_trig->SetFiltered(true);
    m_trig->SetLimitsVoltage(1.35,3.65);

    m_count = new Counter();
    m_count->SetUpDownCounterMode();
    m_count->SetUpSource(m_trig, AnalogTriggerOutput::kFallingPulse);
    m_count->SetDownSource(m_trig, AnalogTriggerOutput::kRisingPulse);
    //m_count->SetUpSourceEdge(true,false);
    //m_count->SetDownSourceEdge(true,false);

    m_count->Start();
}

float AnalogChannelVolt::GetAverageVoltage()
{
    return GetVoltage();
}

void AnalogChannelVolt::ResetTurns()
{
    m_count->Reset();
    m_count->Start();
}

void AnalogChannelVolt::Start()
{
    printf("analogChannelVolt start\n\r");
}

float AnalogChannelVolt::GetVoltage()
{
  float temp = AnalogChannel::GetVoltage();
  temp = (((temp - halfrev) * scale) + halfrev);  // scale
  if(temp < 0) temp = 0; // min
  if(temp > rev) temp = rev; // max
  temp = (temp / ratio) + ((m_count->Get() % ratio) * halfrev); // half scale
#ifdef INV
  temp = rev - temp; // inverse
#endif
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
  if(m_trig)
    delete m_trig;
  if(m_count)
    delete m_count;
}
