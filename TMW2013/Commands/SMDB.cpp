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
	SmartDashboard::PutNumber("FrontLeftPos",Robot::driveTrain->frontLeftPos->GetAverageValue());
	SmartDashboard::PutNumber("FrontRightPos",Robot::driveTrain->frontRightPos->GetAverageValue());
	SmartDashboard::PutNumber("RearLeftPos",Robot::driveTrain->rearLeftPos->GetAverageValue());
	SmartDashboard::PutNumber("RearRightPos",Robot::driveTrain->rearRightPos->GetAverageValue());
	SmartDashboard::PutNumber("SW",Robot::oi->getSteeringWheel());
	SmartDashboard::PutNumber("StickDirection",Robot::oi->getDriverJoystick()->GetDirectionRadians());
	SmartDashboard::PutNumber("StickVelocity", (fabs(Robot::oi->getDriverJoystick()->GetY())+fabs(Robot::oi->getDriverJoystick()->GetX()))/2);
	SmartDashboard::PutNumber("GyroAngle", Robot::driveTrain->gyroscope->GetAngle());
	SmartDashboard::PutNumber("WheelSpokeCounter", Robot::driveTrain->wheelSpokeCounter->Get());
	
	SmartDashboard::PutNumber("FLError", Robot::driveTrain->frontLeft->GetError());
	SmartDashboard::PutNumber("FRError", Robot::driveTrain->frontRight->GetError());
	SmartDashboard::PutNumber("RLError", Robot::driveTrain->rearLeft->GetError());
	SmartDashboard::PutNumber("RRError", Robot::driveTrain->rearRight->GetError());
			
	SmartDashboard::PutNumber("ClimberDistance",Robot::climber->climberDistance->GetDistance());
	SmartDashboard::PutNumber("ClimberAngleLeftVolt", Robot::climber->angleLeft->GetOutputVoltage());
	SmartDashboard::PutNumber("ClimberAngleRightVolt", Robot::climber->angleRight->GetOutputVoltage());
	SmartDashboard::PutNumber("ClimberAngleLeftCurrent", Robot::climber->angleLeft->GetOutputCurrent());
	SmartDashboard::PutNumber("ClimberAngleRightCurrent", Robot::climber->angleRight->GetOutputCurrent());
	SmartDashboard::PutBoolean("ExtendLimit", Robot::climber->extendLimit->Get());
	SmartDashboard::PutBoolean("RetractLimit", Robot::climber->retractLimit->Get());
	SmartDashboard::PutNumber("ClimberRotateStick", Robot::oi->getGamePad()->GetLeftY());
	
	SmartDashboard::PutNumber("ShooterAngleError",Robot::shooter->shooterAngle->GetError());
	SmartDashboard::PutNumber("ShooterAngleVolts",Robot::shooter->shooterAngleSteer->GetOutputVoltage());
	SmartDashboard::PutNumber("ShooterAngleSetpoint",Robot::shooter->shooterAngle->GetSetpoint());
	SmartDashboard::PutNumber("ShooterAngleInput",Robot::shooter->shooterAnglePos->GetAverageValue());
	SmartDashboard::PutNumber("EntryVoltage", Robot::shooter->wheelShooterEntry->GetOutputVoltage());
	SmartDashboard::PutNumber("ExitVoltage", Robot::shooter->wheelShooterExit->GetOutputVoltage());
	SmartDashboard::PutNumber("EntryCurrent", Robot::shooter->wheelShooterEntry->GetOutputCurrent());
	SmartDashboard::PutNumber("ExitCurrent", Robot::shooter->wheelShooterExit->GetOutputCurrent());
	SmartDashboard::PutNumber("EntrySet", Robot::shooter->GetEntrySpeed());
	SmartDashboard::PutNumber("ExitSet", Robot::shooter->GetExitSpeed());
	SmartDashboard::PutBoolean("TriggerStop",Robot::shooter->triggerStop->Get());
	SmartDashboard::PutBoolean("TriggerStopFlag", Robot::shooter->GetTriggerStopFlag());
	SmartDashboard::PutBoolean("FireFlag", Robot::shooter->GetFireFlag());
	SmartDashboard::PutNumber("ShooterCounter", Robot::shooter->GetShooterCounter());
	
	SmartDashboard::PutNumber("PickupAngle", Robot::pickup->pickupAngle->GetAverageValue());
	SmartDashboard::PutNumber("CorrectedPickupAngle", Robot::pickup->GetCorrectedAngle());
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
