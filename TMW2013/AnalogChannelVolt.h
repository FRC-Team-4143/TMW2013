
#ifndef ANALOG_CHANNEL_VOLT_H
#define ANALOG_CHANNEL_VOLT_H

#include <Base.h>
#include <AnalogChannel.h>
#include <AnalogTrigger.h>
#include <Counter.h>
#include <semLib.h>

class Notifier;

class AnalogChannelVolt : public AnalogChannel
{
 public:
  AnalogChannelVolt(UINT8 ModuleNumber, UINT32 channel);
  virtual ~AnalogChannelVolt();
  double PIDGet();
  float GetAverageVoltage();
  float GetVoltage();
  static void CallCalculate(void *controller);
  void Calculate();
  void ResetTurns();
  float getrate();
  float getturns();

 private:
  float m_last;
  float m_current;
  float m_rate;
  int m_turns;
  AnalogTrigger *m_trig;
  Counter *m_count;

  SEM_ID m_semaphore;

  Notifier *m_controlLoop;
};

#endif
