#ifndef PICKER_H
#define PICKER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "math.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class Picker: public Subsystem {
private:
public:
	SpeedController* rightarm;
	SpeedController* leftarm;
	Relay* rightroller;
	Relay* leftroller;


	Picker();
	void InitDefaultCommand();
	void TeleRun(Joystick *);
};
#endif
