// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SMDB.h"
SMDB::SMDB() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	SetRunWhenDisabled(true);
}
// Called just before this Command runs the first time
void SMDB::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void SMDB::Execute() {
	SmartDashboard::PutNumber("FrontLeftVolt",Robot::driveTrain->frontLeftPos->GetAverageVoltage());
	SmartDashboard::PutNumber("FrontRightVolt",Robot::driveTrain->frontRightPos->GetAverageVoltage());
	SmartDashboard::PutNumber("RearLeftVolt",Robot::driveTrain->rearLeftPos->GetAverageVoltage());
	SmartDashboard::PutNumber("RearRightVolt",Robot::driveTrain->rearRightPos->GetAverageVoltage());
		
//	SmartDashboard::PutNumber("StickDirection",Robot::oi->getDriverJoystick()->GetDirectionRadians());
//	SmartDashboard::PutNumber("StickVelocity", (fabs(Robot::oi->getDriverJoystick()->GetY())+fabs(Robot::oi->getDriverJoystick()->GetX()))/2);
	SmartDashboard::PutNumber("StickX", (Robot::oi->GetJoystickX()));
	SmartDashboard::PutNumber("StickY", (Robot::oi->GetJoystickY()));
	SmartDashboard::PutNumber("StickZ", (Robot::oi->GetJoystickZ()));
	//SmartDashboard::PutNumber("GyroAngle", Robot::driveTrain->gyroscope->GetAngle());
	SmartDashboard::PutData("FLpid", Robot::driveTrain->frontLeft);
	SmartDashboard::PutNumber("FLError", Robot::driveTrain->frontLeft->GetError());
	SmartDashboard::PutNumber("FLoutput", Robot::driveTrain->frontLeft->Get());
	SmartDashboard::PutData("FRpid", Robot::driveTrain->frontRight);
	SmartDashboard::PutNumber("FRError", Robot::driveTrain->frontRight->GetError());
	SmartDashboard::PutNumber("FRoutput", Robot::driveTrain->frontRight->Get());
	SmartDashboard::PutData("RLpid", Robot::driveTrain->rearLeft);
	SmartDashboard::PutNumber("RLError", Robot::driveTrain->rearLeft->GetError());
	SmartDashboard::PutNumber("RLoutput", Robot::driveTrain->rearLeft->Get());
	SmartDashboard::PutData("RRpid", Robot::driveTrain->rearRight);
	SmartDashboard::PutNumber("RRError", Robot::driveTrain->rearRight->GetError());
	SmartDashboard::PutNumber("RRoutput", Robot::driveTrain->rearRight->Get());
}
// Make this return true when this Command no longer needs to run execute()
bool SMDB::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void SMDB::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SMDB::Interrupted() {
}
