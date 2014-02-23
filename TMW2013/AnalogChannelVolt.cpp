#include "AnalogChannelVolt.h"
#include <math.h>

AnalogChannelVolt::AnalogChannelVolt(UINT8 modulenumber, UINT32 channel, bool inv, int ratio)
  : AnalogChannel(modulenumber, channel)
{
    Inv = inv;
    Ratio = ratio;

    rev = 5.0;
    halfrev = rev/Ratio;
    scale = rev/(4.8-.2);

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
  temp = (temp / Ratio) + ((m_count->Get() % Ratio) * halfrev); // half scale
  if(Inv)
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
  if(m_trig)
    delete m_trig;
  if(m_count)
    delete m_count;
}
