// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Fire.h"
Fire::Fire(bool autonomous) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Prefs = Preferences::GetInstance();
	Autonomous = autonomous;
}
// Called just before this Command runs the first time
void Fire::Initialize() {
	SetTimeout(.1);
	notready = false;
	delay = GetClock()+.5;
	fireClock = GetClock()+1;
	
	entrySpeed = Robot::shooter->GetEntrySpeed();
	exitSpeed = Robot::shooter->GetExitSpeed();
	if(exitSpeed <= 0 || entrySpeed >=0)
		notready = true;
}
// Called repeatedly when this Command is scheduled to run
void Fire::Execute() {
	if(!notready) {
		if(Robot::shooter->IsShooterReady()) {
				
			if(fireClock > GetClock()) {
				Robot::shooter->trigger->Set(-1);
			}
			else {
				Robot::shooter->trigger->Set(1);
				Robot::shooter->SetSpeeds(12, exitSpeed, false);
			}
			
//			if(!Robot::shooter->triggerStop->Get() && IsTimedOut())
//				delay = GetClock() + .02;
			
		}
		else {
			Initialize();
		}
	}
}
// Make this return true when this Command no longer needs to run execute()
bool Fire::IsFinished() {
	if((!Robot::shooter->triggerStop->Get() && IsTimedOut()) || notready)
		return true;
	else
		return false;
}
// Called once after isFinished returns true
void Fire::End() {
	Robot::shooter->trigger->Set(0);
	Robot::shooter->SetFireTimer();
	Robot::shooter->SetSpeeds(entrySpeed, exitSpeed, true);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Fire::Interrupted() {
	Robot::shooter->trigger->Set(0);
}
