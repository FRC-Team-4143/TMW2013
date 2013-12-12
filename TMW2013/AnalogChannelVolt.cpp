#include "AnalogChannelVolt.h"


AnalogChannelVolt::AnalogChannelVolt(UINT8 modulenumber, UINT32 channel)
  : AnalogChannel(modulenumber, channel)
{
}

double AnalogChannelVolt::PIDGet()
{
   return GetAverageVoltage();
}
