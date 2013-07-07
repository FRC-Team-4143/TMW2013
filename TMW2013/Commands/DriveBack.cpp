// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DriveBack.h"
DriveToLineTask drivetoline;
DriveBack::DriveBack(float speed, float driveangle, float twistangle, float timeout, bool startLeftSide)
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	X = speed*sin(driveangle*3.14159/180);
	Y = speed*cos(driveangle*3.14159/180);
	TwistAngle = twistangle;
	Timeout = timeout;
	StartLeftSide = startLeftSide;
}
// Called just before this Command runs the first time
void DriveBack::Initialize() {
	Robot::driveTrain->gyroscope->Reset();
	SetTimeout(Timeout);
	drivetoline.SetDriveVariables(X,Y,TwistAngle, StartLeftSide);
	drivetoline.Start();
	Robot::driveTrain->wheelSpokeCounter->Reset();
}
// Called repeatedly when this Command is scheduled to run
void DriveBack::Execute() {
	if(IsTimedOut())
	{
		Robot::driveTrain->Crab(0,0,0,false);
		drivetoline.Terminate();
	}
}
// Make this return true when this Command no longer needs to run execute()
bool DriveBack::IsFinished() {
	return  Robot::driveTrain->GetDriveBackFlag();
}
// Called once after isFinished returns true
void DriveBack::End() {
	drivetoline.Pause();
	Robot::driveTrain->SetDriveBackFlag(false);
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBack::Interrupted() {
	drivetoline.Pause();
	Robot::driveTrain->SetDriveBackFlag(false);
}
