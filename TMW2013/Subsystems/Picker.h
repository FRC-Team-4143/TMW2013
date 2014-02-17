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
	//SpeedController* rightarm;
	//SpeedController* leftarm;
	Relay* rightroller;
	Relay* leftroller;
	//AnalogChannel* leftpot;
	//AnalogChannel* rightpot;
	//PIDController* leftpid;
	//PIDController* rightpid;
	Solenoid* rightwingin;
	Solenoid* rightwingout;
	Solenoid* leftwingin;
	Solenoid* leftwingout;

	Picker();
	void InitDefaultCommand();
	void TeleRun(Joystick *);
};
#endif
