// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
AnalogChannelVolt* RobotMap::driveTrainFrontRightPos = NULL;
SpeedController* RobotMap::driveTrainFrontRightSteer = NULL;
PIDController* RobotMap::driveTrainFrontRight = NULL;
AnalogChannelVolt* RobotMap::driveTrainFrontLeftPos = NULL;
SpeedController* RobotMap::driveTrainFrontLeftSteer = NULL;
PIDController* RobotMap::driveTrainFrontLeft = NULL;
AnalogChannelVolt* RobotMap::driveTrainRearRightPos = NULL;
SpeedController* RobotMap::driveTrainRearRightSteer = NULL;
PIDController* RobotMap::driveTrainRearRight = NULL;
AnalogChannelVolt* RobotMap::driveTrainRearLeftPos = NULL;
SpeedController* RobotMap::driveTrainRearLeftSteer = NULL;
PIDController* RobotMap::driveTrainRearLeft = NULL;
SpeedController* RobotMap::driveTrainFrontLeftDrive = NULL;
SpeedController* RobotMap::driveTrainFrontRightDrive = NULL;
SpeedController* RobotMap::driveTrainRearLeftDrive = NULL;
SpeedController* RobotMap::driveTrainRearRightDrive = NULL;

#define CONTINUOUS true
#define P 1.0
#define I 0.0
#define D 0.2
#define F 0.0
#define POTMIN 0.0
#define POTMAX 5.0
#define STEERPOW .75
#define TOLERANCE 0.2
#define PERIOD .02

//Gyro* RobotMap::driveTrainGyroscope = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainFrontRightDrive = new Victor(1, 2);
	lw->AddActuator("DriveTrain", "FrontRightDrive", (Victor *) driveTrainFrontRightDrive);
	driveTrainFrontRightPos = new AnalogChannelVolt(1, 1);
	lw->AddSensor("DriveTrain", "FrontRightPos", driveTrainFrontRightPos);
	driveTrainFrontRightSteer = new Talon(1, 5);
	driveTrainFrontRight = new PIDController(P, I, D, F,  driveTrainFrontRightPos,
                                           driveTrainFrontRightSteer, PERIOD);
	lw->AddActuator("DriveTrain", "FrontRight", driveTrainFrontRight);
	driveTrainFrontRight->SetContinuous(CONTINUOUS); 
  driveTrainFrontRight->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainFrontRight->SetInputRange(POTMIN, POTMAX);
        driveTrainFrontRight->SetOutputRange(-STEERPOW, STEERPOW);

	driveTrainFrontLeftDrive = new Victor(1, 1);
	lw->AddActuator("DriveTrain", "FrontLeftDrive", (Victor *) driveTrainFrontLeftDrive);
	driveTrainFrontLeftPos = new AnalogChannelVolt(1, 4);
	lw->AddSensor("DriveTrain", "FrontLeftPos", driveTrainFrontLeftPos);
	driveTrainFrontLeftSteer = new Victor(1, 8);
	driveTrainFrontLeft = new PIDController(P, I, D, F,  driveTrainFrontLeftPos,
                                          driveTrainFrontLeftSteer, PERIOD);
	lw->AddActuator("DriveTrain", "FrontLeft", driveTrainFrontLeft);
	driveTrainFrontLeft->SetContinuous(CONTINUOUS); 
  driveTrainFrontLeft->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainFrontLeft->SetInputRange(POTMIN, POTMAX);
        driveTrainFrontLeft->SetOutputRange(-STEERPOW, STEERPOW);

	driveTrainRearRightDrive = new Victor(1, 3);
	lw->AddActuator("DriveTrain", "RearRightDrive", (Victor *) driveTrainRearRightDrive);
	driveTrainRearRightPos = new AnalogChannelVolt(1, 3);
	lw->AddSensor("DriveTrain", "RearRightPos", driveTrainRearRightPos);
	driveTrainRearRightSteer = new Jaguar(1, 7);
	driveTrainRearRight = new PIDController(P, I, D, F,  driveTrainRearRightPos,
                                          driveTrainRearRightSteer, PERIOD);
	lw->AddActuator("DriveTrain", "RearRight", driveTrainRearRight);
	driveTrainRearRight->SetContinuous(CONTINUOUS); 
  driveTrainRearRight->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainRearRight->SetInputRange(POTMIN, POTMAX);
        driveTrainRearRight->SetOutputRange(-STEERPOW, STEERPOW);

	driveTrainRearLeftDrive = new Victor(1, 4);
	lw->AddActuator("DriveTrain", "RearLeftDrive", (Victor *) driveTrainRearLeftDrive);
	driveTrainRearLeftPos = new AnalogChannelVolt(1, 2);
	lw->AddSensor("DriveTrain", "RearLeftPos", driveTrainRearLeftPos);
	driveTrainRearLeftSteer = new Jaguar(1, 6);
	driveTrainRearLeft = new PIDController(P, I, D, F,  driveTrainRearLeftPos,
                                         driveTrainRearLeftSteer, PERIOD);
	lw->AddActuator("DriveTrain", "RearLeft", driveTrainRearLeft);
	driveTrainRearLeft->SetContinuous(CONTINUOUS); 
  driveTrainRearLeft->SetAbsoluteTolerance(TOLERANCE); 
        driveTrainRearLeft->SetInputRange(POTMIN, POTMAX);
        driveTrainRearLeft->SetOutputRange(-STEERPOW, STEERPOW);

	//driveTrainGyroscope = new Gyro(1, 5);
	//lw->AddSensor("DriveTrain", "Gyroscope", driveTrainGyroscope);
	//driveTrainGyroscope->SetSensitivity(0.007);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
