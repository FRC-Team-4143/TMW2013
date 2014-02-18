// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutoStop.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CrabDrive.h"
#include "Commands/Drive.h"
#include "Commands/NoneAuto.h"
#include "Commands/PyramidAim.h"
#include "Commands/ResetTurns.h"
#include "Commands/SMDB.h"
#include "Commands/SetWheelOffsets.h"
#include "Commands/ToggleRobotFront.h"
#include "Commands/unwind.h"
#include "Commands/rightwing.h"
#include "Commands/leftwing.h"
#include "Commands/TurnRobot.h"
#include "Commands/TurnWheels.h"
#include "Commands/ShootCommand.h"
#include "Commands/ShootSlowCommand.h"
//#include "Commands/rightroller.h"
//#include "Commands/leftroller.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	driverJoystick = new Joystick(1);
	pickerJoystick = new Joystick(2);
	
	//smartDashboardButton = new JoystickButton(driverJoystick, 8);
	//smartDashboardButton->WhileHeld(new SMDB());

	y = new JoystickButton(driverJoystick, 4);
	y->WhileHeld(new ToggleRobotFront());

	x = new JoystickButton(driverJoystick, 3);
	x->WhileHeld(new unwind());
     
	l = new JoystickButton(driverJoystick, 5);
	l->WhileHeld(new leftwing());

	r = new JoystickButton(driverJoystick, 6);
	r->WhileHeld(new rightwing());

	//select = new JoystickButton(driverJoystick, 7);
	//select->WhileHeld(new leftroller());

	//start = new JoystickButton(driverJoystick, 8);
	//start->WhileHeld(new rightroller());

	a = new JoystickButton(driverJoystick, 1);
	a->WhenPressed(new ShootCommand());
    
	b = new JoystickButton(driverJoystick, 2);
	b->WhenPressed(new ShootSlowCommand());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("SetWheelOffsets", new SetWheelOffsets());
	SmartDashboard::PutData("ResetTurns", new ResetTurns());
	SmartDashboard::PutData("SMDB", new SMDB());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
Joystick* OI::getDriverJoystick() {
	return driverJoystick;
}

Joystick* OI::getPickerJoystick() {
	return pickerJoystick;
}

float OI::GetJoystickX() {
	float x = driverJoystick->GetRawAxis(1);
	if(fabs(x) < .15)
		return 0;
	else
		return x;
}
float OI::GetJoystickY() {
	float x = driverJoystick->GetRawAxis(2);
	if(fabs(x) < .15)
		return 0;
	else
		return x;
}
float OI::GetJoystickZ() {
	float x = driverJoystick->GetRawAxis(4);
	if(fabs(x) < .15)
		return 0;
	else
		return x;
}
float OI::GetJoystickA() {
	float x = driverJoystick->GetRawAxis(3);
	if(fabs(x) < .15)
		return 0;
	else
		return x;
}
float OI::GetJoystickB() {
	float x = driverJoystick->GetRawAxis(5);
	if(fabs(x) < .15)
		return 0;
	else
		return x;
}
