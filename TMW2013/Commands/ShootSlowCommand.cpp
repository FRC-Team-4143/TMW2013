// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#define MINSHOOT 15
#define SHOOTZONE .5
#define WINGTIME 10

#include "ShootSlowCommand.h"
ShootSlowCommand::ShootSlowCommand(Joystick * joystick) {
	Requires(Robot::picker);
	SetTimeout(1.5);
	Joystick1 = joystick;
  	Prefs = Preferences::GetInstance();
	DS = DriverStation::GetInstance();
}
// Called just before this Command runs the first time
void ShootSlowCommand::Initialize() {
  loops = 1;
  printf("ShootSlowCommand called \n");
  //CamStop = Prefs->GetFloat("CamStop", 1.5);
  CamStop = DS->GetAnalogIn(1) + .5;
  //ShootSpeed = DS->GetAnalogIn(5);
  ShootSpeed = .5;
  
  if(Joystick1 != NULL && Joystick1->GetRawAxis(3) > -.5)  // right trigger safety
	loops = 0; // loop will be 1 first time through loop
  else {
     //   Robot::picker->RightWingOut();
     //    Robot::picker->LeftWingOut();
  	Robot::picker->StartShooter(ShootSpeed);
  }
}
// Called repeatedly when this Command is scheduled to run
void ShootSlowCommand::Execute() {
	loops++;
}
// Make this return true when this Command no longer needs to run execute()
bool ShootSlowCommand::IsFinished() {
	if(loops == 1) return true; // no safety

	if(IsTimedOut()) return true; // too long --- what broke?

     //  if(loops >= WINGTIME) {
      //          Robot::picker->RightWingStay();
       //         Robot::picker->LeftWingStay();
       // }

	if(loops <= MINSHOOT)
		return false; // give arm a chance to move

	float x = Robot::picker->GetShooterPot();

	if(x > CamStop && 
		x < (CamStop+SHOOTZONE))
		return true;
	else
		return false;
}
// Called once after isFinished returns true
void ShootSlowCommand::End() {
	Robot::picker->StopShooter();
   	printf("ShootSlowCommand end\n");
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootSlowCommand::Interrupted() {
	Robot::picker->StopShooter();
   	printf("ShootSlowCommand interrupted\n");
}
