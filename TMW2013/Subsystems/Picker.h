#ifndef PICKER_H
#define PICKER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "math.h"
#include "../AnalogChannelVolt.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class Picker: public Subsystem {
private:
	Relay* rightroller;
	Relay* leftroller;
	Solenoid* rightwingin;
	Solenoid* rightwingout;
	Solenoid* leftwingin;
	Solenoid* leftwingout;
	Solenoid* reardeploy;
	Solenoid* reardeployin;
	SpeedController* shooter;
	Compressor* compressor;
	AnalogChannelVolt* shooterpot;
	bool valvepulse;
	int count;
	bool shooting;

public:
	Picker();
	void InitDefaultCommand();
	void TeleRun(Joystick *, Joystick *);
	void StartShooter(float);
	void StopShooter();
	float GetShooterPot();
	void DeployRear();
	void RetractRear();
	void RightWingIn();
	void RightWingStay();
	void RightWingOut();
	void LeftWingIn();
	void LeftWingStay();
	void LeftWingOut();
	void LeftRollerIntake();
	void LeftRollerCatch();
	void LeftRollerOff();
	void RightRollerIntake();
	void RightRollerCatch();
	void RightRollerOff();
	void Shooting();
	void DoneShooting();
};
#endif
