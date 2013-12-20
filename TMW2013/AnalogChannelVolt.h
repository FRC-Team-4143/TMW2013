
#ifndef ANALOG_CHANNEL_VOLT_H
#define ANALOG_CHANNEL_VOLT_H

#include <Base.h>
#include <AnalogChannel.h>
#include <AnalogTrigger.h>
#include <Counter.h>

class AnalogChannelVolt : public AnalogChannel
{
 public:
  AnalogChannelVolt(UINT8 ModuleNumber, UINT32 channel);
  virtual ~AnalogChannelVolt();
  double PIDGet();
  float GetAverageVoltage();
  float GetVoltage();
  void ResetTurns();
  int getturns();

 private:
  int m_turns;
  AnalogTrigger *m_trig;
  Counter *m_count;
};

#endif
