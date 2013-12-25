
#ifndef ANALOG_CHANNEL_VOLT_H
#define ANALOG_CHANNEL_VOLT_H

#include <Base.h>
#include <AnalogChannel.h>
#include <AnalogModule.h>
#include <AnalogTrigger.h>
#include <AnalogTriggerOutput.h>
#include <Counter.h>
//#include <Encoder.h>
#include <LiveWindow/LiveWindow.h>

class AnalogChannelVolt : public AnalogChannel
{
 public:
  AnalogChannelVolt(UINT8 ModuleNumber, UINT32 channel);
  virtual ~AnalogChannelVolt();
  double PIDGet();
  float GetAverageVoltage();
  float GetVoltage();
  void ResetTurns();
  void Start();
  int getturns();
  //bool getInWindow();
  //bool getInWindow2();

 private:
  AnalogTrigger *m_trig;
  AnalogTrigger *m_trig2;
  AnalogTriggerOutput *m_trigo;
  AnalogTriggerOutput *m_trig2o;
  //Encoder *m_encoder;
  Counter *m_count;
  UINT8 m_module;
  UINT32 m_channel;
};

#endif
