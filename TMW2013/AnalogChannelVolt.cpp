#include "AnalogChannelVolt.h"
#include <math.h>

static const float rev = 5.0;
static const float halfrev = rev/2;
static const float scale = rev/(4.8-.2);
static const int ratio = 2; // ratio of pot to finished gear, must be int

#define INV

AnalogChannelVolt::AnalogChannelVolt(UINT8 modulenumber, UINT32 channel)
  : AnalogChannel(modulenumber, channel)
{
    m_module = modulenumber;
    m_channel = channel;
    this->GetModule()->SetSampleRate(1000);

    m_trig = new AnalogTrigger(m_module, m_channel);
    m_trig2 = new AnalogTrigger(m_module, m_channel);

    m_trig->SetFiltered(true);
    m_trig->SetLimitsVoltage(0.0,2.5);

    m_trig2->SetFiltered(true);
    m_trig2->SetLimitsVoltage(1.35,3.65);

    m_trigo = m_trig->CreateOutput(AnalogTriggerOutput::kInWindow);
    m_trig2o = m_trig2->CreateOutput(AnalogTriggerOutput::kInWindow);

    m_encoder = new Encoder(m_trigo, m_trig2o, false, Counter::k1X);
    m_encoder->Start();
}

float AnalogChannelVolt::GetAverageVoltage()
{
    return GetVoltage();
}

void AnalogChannelVolt::Start()
{
    printf("analogChannelVolt start\n\r");
}

void AnalogChannelVolt::ResetTurns()
{
    m_encoder->Reset();
    m_encoder->Start();
}

float AnalogChannelVolt::GetVoltage()
{
  float temp = AnalogChannel::GetVoltage();
  temp = (((temp - halfrev) * scale) + halfrev);  // scale 
  if(temp < 0) temp = 0; // min
  if(temp > rev) temp = rev; // max
  temp = (temp / ratio) + ((m_encoder->GetRaw() % ratio) * halfrev); // half scale
#ifdef INV
  temp = rev - temp; // inverse
#endif
  return temp;
}

int AnalogChannelVolt::getturns()
{ 
  return m_encoder->GetRaw();
}

bool AnalogChannelVolt::getInWindow()
{
  return m_trig->GetInWindow();
}

bool AnalogChannelVolt::getInWindow2()
{
  return m_trig2->GetInWindow();
}

double AnalogChannelVolt::PIDGet()
{
  return GetVoltage();
}

AnalogChannelVolt::~AnalogChannelVolt()
{
  if(m_encoder)
     delete m_encoder;
  if(m_trigo)
     delete m_trigo;
  if(m_trig2o)
     delete m_trig2o;
  if(m_trig)
     delete m_trig;
  if(m_trig2)
     delete m_trig2;
}
