// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef _ROBOT_H
#define _ROBOT_H
#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/AutonomousCommand.h"
#include "Subsystems/Climber.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Pickup.h"
#include "Subsystems/Shooter.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
#include "RAWCConstants.h"
#include <iostream>
#include "Commands/ShooterInFront.h"
#include "Commands/ShooterInMiddle.h"
#include "Commands/ShooterInBack.h"
#include "Gamepad.h"
class Robot : public IterativeRobot {
public:
	Command *autonomousCommand;
	SendableChooser *autoChooser;
	static OI *oi;
	LiveWindow *lw;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static DriveTrain* driveTrain;
	static Shooter* shooter;
	static Pickup* pickup;
	static Climber* climber;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	virtual void RobotInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
	void SMDB();
private:
	RAWCConstants* File;
	Preferences* Prefs;
	float FLOffset;
	float FROffset;
	float RLOffset;
	float RROffset;
	float ShooterAngleOffset;
	float ClimberAngleOffset;
	
	float* pFLOffset;
	float* pFROffset;
	float* pRLOffset;
	float* pRROffset;
	
	bool GyroReset;
};
#endif
