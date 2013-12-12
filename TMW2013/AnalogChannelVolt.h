
#ifndef ANALOG_CHANNEL_VOLT_H
#define ANALOG_CHANNEL_VOLT_H

#include <AnalogChannel.h>

class AnalogChannelVolt : public AnalogChannel
{
 public:
  AnalogChannelVolt(UINT8 ModuleNumber, UINT32 channel);
  virtual ~AnalogChannelVolt();
  double PIDGet();
};



#endif
