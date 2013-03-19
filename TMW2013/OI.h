// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* driverJoystick;
	JoystickButton* smartDashboardButton;
	JoystickButton* toggleFront;
	JoystickButton* pyramidAimButton;
	JoystickButton* fireButton;
	JoystickButton* aimDrive;
	JoystickButton* trigger;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	GamePad* gamePad;
	JoystickButton* middleshooting;
	JoystickButton* frontshooting;
	JoystickButton* climbingShooter;
	JoystickButton* dropShooter;
	JoystickButton* deployHooks;
	JoystickButton* climb;
	JoystickButton* retractHooks;
	JoystickButton* pickupDisc;
	JoystickButton* gpadfire;
	JoystickButton* forwardPickup;
	JoystickButton* reversePickup;
public:
	OI();
 
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	double getSteeringWheel();
	Joystick* getDriverJoystick();
	bool getWheelOffset();
	bool getGyroReset();
	void setOIDigitalOutput1(bool value);
	void setOIDigitalOutput2(bool value);
	void setOIDigitalOutput3(bool value);
	void setOIDigitalOutput4(bool value);
	void setOIDigitalOutput5(bool value);
	void setOIDigitalOutput6(bool value);
	void setOIDigitalOutput7(bool value);
	void setOIDigitalOutput8(bool value);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	GamePad* getGamePad();
};
#endif
