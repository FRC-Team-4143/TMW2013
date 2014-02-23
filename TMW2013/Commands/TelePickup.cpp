#include "TelePickup.h"
TelePickup::TelePickup() {
	Requires(Robot::picker);
}
// Called just before this Command runs the first time
void TelePickup::Initialize() {
}
// Called repeatedly when this Command is scheduled to run
void TelePickup::Execute() {
	Robot::picker->TeleRun(Robot::oi->getDriverJoystick(), Robot::oi->getPickerJoystick());
}
// Make this return true when this Command no longer needs to run execute()
bool TelePickup::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void TelePickup::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TelePickup::Interrupted() {
}
