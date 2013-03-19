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
#include "Commands/AutoPickup.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CrabDrive.h"
#include "Commands/DecreaseShooterAngle.h"
#include "Commands/DeployHooks.h"
#include "Commands/Drive.h"
#include "Commands/DriveToDiscs.h"
#include "Commands/ExtendClimber.h"
#include "Commands/Fire.h"
#include "Commands/NoneAuto.h"
#include "Commands/OperatorClimb.h"
#include "Commands/OperatorPickup.h"
#include "Commands/PickupDisc.h"
#include "Commands/PivotDrive.h"
#include "Commands/PyramidAim.h"
#include "Commands/ResetGyro.h"
#include "Commands/RetractHooks.h"
#include "Commands/ReverseOpeartorPickup.h"
#include "Commands/SMDB.h"
#include "Commands/SetWheelOffsets.h"
#include "Commands/Shoot3Pickup2.h"
#include "Commands/Shoot3andStay.h"
#include "Commands/ShooterClimb.h"
#include "Commands/ShooterDrop.h"
#include "Commands/ShooterInBack.h"
#include "Commands/ShooterInFront.h"
#include "Commands/ShooterInMiddle.h"
#include "Commands/ShooterIncreaseAngle.h"
#include "Commands/ShooterPyramidGoal.h"
#include "Commands/ShooterRun.h"
#include "Commands/ShooterStop.h"
#include "Commands/SteerDrive.h"
#include "Commands/TargetDrive.h"
#include "Commands/TenPtClimb.h"
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
	pyramidAimButton = new JoystickButton(driverJoystick, 5);
	pyramidAimButton->WhileHeld(new PyramidAim());
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
	SmartDashboard::PutData("PickupDisc", new PickupDisc());
	SmartDashboard::PutData("SetWheelOffsets", new SetWheelOffsets());
	SmartDashboard::PutData("ResetGyro", new ResetGyro());
	SmartDashboard::PutData("SMDB", new SMDB());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    	
	
	gamePad = new GamePad(2);
	
	frontshooting = new JoystickButton(gamePad, 4);
	frontshooting->WhenPressed(new ShooterInFront());
	
	middleshooting = new JoystickButton(gamePad, 3);
	middleshooting->WhenPressed(new ShooterInMiddle());
		
	climbingShooter = new JoystickButton(gamePad, 2);
	climbingShooter->WhenPressed(new ShooterClimb);
	
	dropShooter = new JoystickButton(gamePad, 1);
	dropShooter->WhenPressed(new ShooterDrop());
	
	forwardPickup = new JoystickButton(gamePad, 8);
	forwardPickup->WhileHeld(new OperatorPickup());
	
	reversePickup = new JoystickButton(gamePad, 6);
	reversePickup->WhileHeld(new ReverseOpeartorPickup());	
	
	
//	retractHooks = new JoystickButton(gamePad, 6);
//	retractHooks->WhenPressed(new RetractHooks);
	
	pickupDisc = new JoystickButton(gamePad, 5);
	pickupDisc->WhenPressed(new PickupDisc);
 	
	gpadfire = new JoystickButton(gamePad, 7);
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
