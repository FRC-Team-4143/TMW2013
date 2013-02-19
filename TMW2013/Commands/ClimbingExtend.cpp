// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ClimbingExtend.h"
ClimbingExtend::ClimbingExtend(float extendspeed, float anglespeed, int angle, float startangchange, float endangchange) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::climber);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	ExtendSpeed = extendspeed;
	AngleSpeed = anglespeed;
	Angle = angle;
	StartAngChange = startangchange;
	EndAngChange = endangchange;
}
// Called just before this Command runs the first time
void ClimbingExtend::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void ClimbingExtend::Execute() {
	if(
			(Robot::climber->climberDistance->GetDistance() < EndAngChange) || 
			(Robot::climber->climberDistance->GetDistance() >= EndAngChange && (Angle - Robot::climber->GetCorrectedAngle()) < -10)
		) {
		Robot::climber->RunClimber(ExtendSpeed);
	}
	else {
		Robot::climber->RunClimber(0);
	}
	
	if((Angle - Robot::climber->GetCorrectedAngle()) > 10) {
	Robot::climber->angleLeft->Set(-AngleSpeed);
	Robot::climber->angleRight->Set(AngleSpeed);
	}
	else if ((Angle - Robot::climber->GetCorrectedAngle()) < -10) {
		Robot::climber->angleLeft->Set(AngleSpeed);
		Robot::climber->angleRight->Set(-AngleSpeed);
		}
	else {
		Robot::climber->angleLeft->Set(0);
		Robot::climber->angleRight->Set(0);
	}
}
// Make this return true when this Command no longer needs to run execute()
bool ClimbingExtend::IsFinished() {
	return !Robot::climber->extendLimit->Get();
}
// Called once after isFinished returns true
void ClimbingExtend::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbingExtend::Interrupted() {
}
