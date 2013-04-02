// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.



#include "Shoot3Pickup2.h"
#include "Fire.h"
#include "Drive.h"
#include "DriveToDiscs.h"
#include "TurnWheels.h"
#include "ShooterInMiddle.h"
#include "AutoPickup.h"
#include "AutoFire.h"
#include "ResetWheelCounter.h"
#include "DriveToPyramid.h"
#include "ExtendClimber.h"
#include "TurnWheels.h"
#include "TurnRobot.h"
#include "AutoShooter.h"


Shoot3Pickup2::Shoot3Pickup2() {
	/*AddSequential (new ShooterInBack());
	AddSequential (new TurnWheels(3.14159/2));
	AddSequential (new Drive(3.14159/2, -.3, 0.5, true));
	AddSequential (new Drive(3.14159/2, .1, 0.1, false));
	AddSequential (new Fire());
	AddSequential (new Fire());
	AddSequential (new Fire());
	AddSequential (new Fire());
	AddSequential (new Fire());*/
	
	AddSequential (new TurnWheels(0.0));
	AddSequential (new AutoShooter());
	AddParallel (new ExtendClimber());
	AddSequential (new AutoFire());
	AddSequential (new AutoFire());
	AddSequential (new AutoFire());
	AddSequential (new TurnRobot(50, 2));
	AddSequential (new TurnWheels(3.14159/2));
	AddSequential (new ResetWheelCounter());
	AddSequential (new Drive(3.14159/2, -.5, .3, true));
	AddSequential (new DriveToDiscs(3.14159/2, -.40, 1.5, 25));
	AddSequential (new AutoPickup());
	
	AddSequential (new TurnWheels(0));
	AddSequential (new TurnRobot(14, 5));
	AddSequential (new TurnWheels(3.14159/2));
	AddSequential (new Drive (3.14159/2, .4, 1.3, true));
	AddSequential (new Drive (3.14159/2, -.3, .2, false));
	AddSequential (new AutoFire());
	AddSequential (new AutoFire());
	AddSequential (new AutoFire());
	AddSequential (new AutoFire());
	
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
