// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DriveToDiscs.h"
DriveToDiscs::DriveToDiscs(double direction, double velocity, double timeout, int count) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	radian = direction;
	speed = velocity;
	SetTimeout(timeout);
	gyroAngle = 0;
	CounterLimit = count;
}
// Called just before this Command runs the first time
void DriveToDiscs::Initialize() {
	gyroAngle = Robot::driveTrain->gyroscope->GetAngle();
	
}
// Called repeatedly when this Command is scheduled to run
void DriveToDiscs::Execute() {
	GyroRad = (Robot::driveTrain->gyroscope->GetAngle()-gyroAngle)*3.14159/180;
	if(speed > 0)
		Robot::driveTrain->Steer(radian + GyroRad, speed, .5);
	else
		Robot::driveTrain->Steer(radian - GyroRad, speed, .5);
}
// Make this return true when this Command no longer needs to run execute()
bool DriveToDiscs::IsFinished() {
	return Robot::driveTrain->wheelSpokeCounter->Get() > CounterLimit;/*IsTimedOut() || (SmartDashboard::GetNumber("FoundDisc") > .5)*/
}
// Called once after isFinished returns true
void DriveToDiscs::End() {
	Robot::driveTrain->Steer(3.14159/2, 0, .5);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToDiscs::Interrupted() {
	Robot::driveTrain->Steer(3.14159/2, 0, .5);
}
