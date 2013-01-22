// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "TurnWheels.h"

TurnWheels::TurnWheels()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void TurnWheels::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TurnWheels::Execute() {
	Robot::driveTrain->Steer(radian, 0.0);
	
	//need to stop drive motors!!!
	
}

// Make this return true when this Command no longer needs to run execute()
bool TurnWheels::IsFinished() {
	if(Robot::driveTrain->frontLeft->OnTarget() && Robot::driveTrain->frontRight->OnTarget() &&	Robot::driveTrain->rearLeft->OnTarget() && Robot::driveTrain->rearRight->OnTarget());
		return true;
		
	return false;
}

// Called once after isFinished returns true
void TurnWheels::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnWheels::Interrupted() {

}
