// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetWheelOffsets.h"
SetWheelOffsets::SetWheelOffsets() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	SetRunWhenDisabled(true);
}
// Called just before this Command runs the first time
void SetWheelOffsets::Initialize() {
	File = RAWCConstants::getInstance();
	if(DriverStation::GetInstance()->IsDisabled()){
		FLOffset = Robot::driveTrain->frontLeftPos->GetAverageVoltage()-2.5;
		FROffset = Robot::driveTrain->frontRightPos->GetAverageVoltage()-2.5;
		RLOffset = Robot::driveTrain->rearLeftPos->GetAverageVoltage()-2.5;
		RROffset = Robot::driveTrain->rearRightPos->GetAverageVoltage()-2.5;
				
		File->insertKeyAndValue("FLOff", FLOffset);
		File->insertKeyAndValue("FROff", FROffset);
		File->insertKeyAndValue("RLOff", RLOffset);
		File->insertKeyAndValue("RROff", RROffset);
			
		File->save();
		
		Robot::driveTrain->SetOffsets(FLOffset, FROffset, RLOffset, RROffset);
	
		SetTimeout(2);
	}
	else
		SetTimeout(0);
}
// Called repeatedly when this Command is scheduled to run
void SetWheelOffsets::Execute() {
}
// Make this return true when this Command no longer needs to run execute()
bool SetWheelOffsets::IsFinished() {
		return IsTimedOut();
}
// Called once after isFinished returns true
void SetWheelOffsets::End() {
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetWheelOffsets::Interrupted() {
		
}
