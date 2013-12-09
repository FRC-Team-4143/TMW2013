// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Robot.h"
#include "Commands/NoneAuto.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
DriveTrain* Robot::driveTrain = 0;
OI* Robot::oi = 0;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	driveTrain = new DriveTrain();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi = new OI();
	lw = LiveWindow::GetInstance();
	// instantiate the command used for the autonomous period
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand = new AutonomousCommand();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	
	Prefs = Preferences::GetInstance();
	File = RAWCConstants::getInstance();
	Robot::driveTrain->SetWheelbase(11, 22, 11);
	Robot::driveTrain->SetMaxSpeed(100);

  printf("getting offsets\r\n");
	
	FLOffset = File->getValueForKey("FLOff");
	FROffset = File->getValueForKey("FROff");
	RLOffset = File->getValueForKey("RLOff");
	RROffset = File->getValueForKey("RROff");

  printf("done getting offsets\r\n");
	
	Robot::driveTrain->SetOffsets(FLOffset, FROffset, RLOffset, RROffset);
	
	Robot::driveTrain->frontLeftPos->SetAverageBits(256);
	Robot::driveTrain->frontRightPos->SetAverageBits(256);
	Robot::driveTrain->rearLeftPos->SetAverageBits(256);
	Robot::driveTrain->rearRightPos->SetAverageBits(256);
		
	Robot::driveTrain->frontLeft->Enable();
	Robot::driveTrain->frontRight->Enable();
	Robot::driveTrain->rearLeft->Enable();
	Robot::driveTrain->rearRight->Enable();
	
	if(!Prefs->ContainsKey("SteerScaling"))
		Prefs->PutFloat("SteerScaling",1.25);
	
	autoChooser = new SendableChooser();
	autoChooser->AddObject("1. None", new NoneAuto());
	SmartDashboard::PutData("AutonomousChooser", autoChooser);
		
}
	
void Robot::DisabledPeriodic(){
	Scheduler::GetInstance()->Run();
}
void Robot::AutonomousInit() {
	Robot::driveTrain->rearLeft->SetOutputRange(-1, 1);
	Robot::driveTrain->rearRight->SetOutputRange(-1, 1);
	Robot::driveTrain->frontRight->SetOutputRange(-1, 1);
	Robot::driveTrain->frontLeft->SetOutputRange(-1, 1);
	Robot::driveTrain->SetDriveBackFlag(false);
	autonomousCommand = (Command*) autoChooser->GetSelected();
	if (autonomousCommand != NULL)
		autonomousCommand->Start();
}
	
void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
	
}	
void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to 
	// continue until interrupted by another command, remove
	// this line or comment it out.
	autonomousCommand->Cancel();
	Robot::driveTrain->rearLeft->SetOutputRange(-0.75, 0.75);
	Robot::driveTrain->rearRight->SetOutputRange(-0.75, 0.75);
	Robot::driveTrain->frontRight->SetOutputRange(-0.75, 0.75);
	Robot::driveTrain->frontLeft->SetOutputRange(-0.75, 0.75);
}
void Robot::TeleopPeriodic() {
	if (autonomousCommand != NULL)
		Scheduler::GetInstance()->Run();
		
}
void Robot::TestPeriodic() {
	lw->Run();
}
START_ROBOT_CLASS(Robot);
