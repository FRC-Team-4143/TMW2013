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
#include "Commands/AutoShooter.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ClimbExtendFinalStage.h"
#include "Commands/ClimberPullDown.h"
#include "Commands/ClimberPullUnder.h"
#include "Commands/ClimbingAngleChange.h"
#include "Commands/ClimbingExtend.h"
#include "Commands/ClimbingRetract.h"
#include "Commands/ClimbingSequence.h"
#include "Commands/ClimbingShooter.h"
#include "Commands/CrabDrive.h"
#include "Commands/DeployHooks.h"
#include "Commands/Drive.h"
#include "Commands/Fire.h"
#include "Commands/FireSequence.h"
#include "Commands/OperatorClimb.h"
#include "Commands/PickupPosition.h"
#include "Commands/PivotDrive.h"
#include "Commands/PyramidAim.h"
#include "Commands/RandomDriving.h"
#include "Commands/RetractHooks.h"
#include "Commands/SetClimberDistanceHome.h"
#include "Commands/Shoot3andStay.h"
#include "Commands/ShooterDrop.h"
#include "Commands/ShooterInBack.h"
#include "Commands/ShooterInFront.h"
#include "Commands/ShooterInMiddle.h"
#include "Commands/ShooterPyramidGoal.h"
#include "Commands/ShooterRun.h"
#include "Commands/ShooterStop.h"
#include "Commands/SteerDrive.h"
#include "Commands/TargetDrive.h"
#include "Commands/ToggleFront.h"
#include "Commands/TurnRobot.h"
#include "Commands/TurnWheels.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	driverJoystick = new Joystick(1);
	
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
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	gamePad = new GamePad(2);
	
	frontshooting = new JoystickButton(gamePad, 4);
	frontshooting->WhenPressed(new ShooterInFront());
	
	middleshooting = new JoystickButton(gamePad, 3);
	middleshooting->WhenPressed(new ShooterInMiddle());
		
	backshooting = new JoystickButton(gamePad, 2);
	backshooting->WhenPressed(new ShooterInBack());
	
	dropShooter = new JoystickButton(gamePad, 1);
	dropShooter->WhenPressed(new ShooterDrop());
	
	deployHooks = new JoystickButton(gamePad, 6);
	deployHooks->WhenPressed(new DeployHooks);
	
	retractHooks = new JoystickButton(gamePad, 8);
	retractHooks->WhenPressed(new RetractHooks);
	
	shooterPyramid = new JoystickButton(gamePad, 5);
	shooterPyramid->WhenPressed(new ShooterPyramidGoal);
	
	gpadfire = new JoystickButton(gamePad, 7);
	gpadfire->WhenPressed(new Fire);
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
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
