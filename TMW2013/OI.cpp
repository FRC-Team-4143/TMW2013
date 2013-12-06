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
#include "Commands/AutoFire.h"
#include "Commands/AutoPickup.h"
#include "Commands/AutoShooter.h"
#include "Commands/AutoStop.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CrabDrive.h"
#include "Commands/DecreaseShooterAngle.h"
#include "Commands/Drive.h"
#include "Commands/DriveBack.h"
#include "Commands/DriveToDiscs.h"
#include "Commands/DriveToPyramid.h"
#include "Commands/DropPickup.h"
#include "Commands/Fire.h"
#include "Commands/FollowLine.h"
#include "Commands/NoneAuto.h"
#include "Commands/PyramidAim.h"
#include "Commands/RaisePickup.h"
#include "Commands/ResetGyro.h"
#include "Commands/ResetWheelCounter.h"
#include "Commands/RunPickup.h"
#include "Commands/SMDB.h"
#include "Commands/SetWheelOffsets.h"
#include "Commands/Shoot3CornerPickup3pt.h"
#include "Commands/Shoot3DriveBackOverDiscs.h"
#include "Commands/Shoot3FromCorner.h"
#include "Commands/ShooterClimb.h"
#include "Commands/ShooterDrop.h"
#include "Commands/ShooterInBack.h"
#include "Commands/ShooterInFront.h"
#include "Commands/ShooterInMiddle.h"
#include "Commands/ShooterIncreaseAngle.h"
#include "Commands/ShooterRun.h"
#include "Commands/ShooterStop.h"
#include "Commands/SteerDrive.h"
#include "Commands/TargetDrive.h"
#include "Commands/ToggleRobotFront.h"
#include "Commands/TurnRobot.h"
#include "Commands/TurnWheels.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	driverJoystick = new Joystick(1);
	
	smartDashboardButton = new JoystickButton(driverJoystick, 8);
	smartDashboardButton->WhileHeld(new SMDB());
	toggleFront = new JoystickButton(driverJoystick, 4);
	toggleFront->WhileHeld(new ToggleRobotFront());
	fireButton = new JoystickButton(driverJoystick, 2);
	fireButton->WhenPressed(new Fire());
	aimDrive = new JoystickButton(driverJoystick, 3);
	aimDrive->WhileHeld(new TargetDrive());
	trigger = new JoystickButton(driverJoystick, 1);
	trigger->WhileHeld(new CrabDrive());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("ShooterRun", new ShooterRun());
	SmartDashboard::PutData("ShooterStop", new ShooterStop());
	SmartDashboard::PutData("Fire", new Fire());
	SmartDashboard::PutData("SetWheelOffsets", new SetWheelOffsets());
	SmartDashboard::PutData("ResetGyro", new ResetGyro());
	SmartDashboard::PutData("SMDB", new SMDB());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    	
	
	gamePad = new GamePad(2);
	
	frontshooting = new JoystickButton((GenericHID*)gamePad, 4);
	frontshooting->WhenPressed(new ShooterInFront());
	
	middleshooting = new JoystickButton((GenericHID*)gamePad, 3);
	middleshooting->WhenPressed(new ShooterInMiddle());
	
	backshooting = new JoystickButton((GenericHID*)gamePad, 2);
	backshooting->WhenPressed(new ShooterInBack());
			
	dropShooter = new JoystickButton((GenericHID*)gamePad, 1);
	dropShooter->WhenPressed(new ShooterDrop());
	
	gpadfire = new JoystickButton((GenericHID*)gamePad, 7);
	gpadfire->WhenPressed(new Fire());
	
	
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
void OI::setOIDigitalOutput8(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(8, value);
}
void OI::setOIDigitalOutput7(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(7, value);
}
void OI::setOIDigitalOutput6(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(6, value);
}
void OI::setOIDigitalOutput5(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(5, value);
}
void OI::setOIDigitalOutput4(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(4, value);
}
void OI::setOIDigitalOutput3(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(3, value);
}
void OI::setOIDigitalOutput2(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(2, value);
}
void OI::setOIDigitalOutput1(bool value) {
	DriverStation::GetInstance()->SetDigitalOut(1, value);
}
bool OI::getGyroReset() {
	return DriverStation::GetInstance()->GetDigitalIn(5);
}
bool OI::getWheelOffset() {
	return DriverStation::GetInstance()->GetDigitalIn(6);
}
Joystick* OI::getDriverJoystick() {
	return driverJoystick;
}
double OI::getSteeringWheel() {
	return DriverStation::GetInstance()->GetAnalogIn(2);
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
GamePad* OI::getGamePad(){
	return gamePad;
}
float OI::GetJoystickX() {
	if(fabs(driverJoystick->GetX()) < .1)
		return 0;
	else
		return driverJoystick->GetX();
}
float OI::GetJoystickY() {
	if(fabs(driverJoystick->GetY()) < .1)
		return 0;
	else
		return driverJoystick->GetY();
}
float OI::GetSWUnit() {
	if(fabs(getSteeringWheel()*.9053-1.24) < .1)
		return 0;
	else	
		return getSteeringWheel()*.9053-1.24;
}
