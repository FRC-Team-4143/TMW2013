// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.



#include "ClimbingSequence.h"
#include "ClimbingShooter.h"
#include "ClimbingRetract.h"
#include "ClimbingExtend.h"
#include "ClimbExtendFinalStage.h"
#include "ClimbingAngleChange.h"

ClimbingSequence::ClimbingSequence() {
	
	AddSequential (new ClimbingRetract(1.0, .5, 200, 20, 2));//start climbing first stage
	AddSequential (new ClimbingShooter(228, 0.0, 0.0));//extend hooks using shooter
	AddParallel (new ClimbingExtend(1.0, .5, 250, 2, 20));//extend climber to reach next section
	AddSequential (new ClimbingShooter(310, 0.0, 0.0));//extend hooks using shooter
	
	//10 points!
	
	AddSequential (new ClimbingAngleChange(150, .5));//drops hooks over bar
	AddSequential (new ClimbingRetract(1.0, .5, 200, 20, 2));//start climbing second stage
	AddSequential (new ClimbingShooter(125, 0.0, 0.0));//extend hooks using shooter
	AddSequential (new ClimbingExtend(1.0, .5, 250, 2, 20));//extend climber to reach next section

	//20 points!!
	
	AddSequential (new ClimbingAngleChange(150, .5));//drops hooks over bar
	AddSequential (new ClimbingRetract(1.0, .5, 500, 20, 2));//start climbing third stage
	AddSequential (new ClimbingAngleChange(150, .5));//set top hooks onto bar
	AddSequential (new ClimbExtendFinalStage(1.0, .5, 250, 5));//drives bottom of bars up above 2nd stage until rotate
	AddSequential (new ClimbExtendFinalStage(1.0, .5, 300, 15));//drives bottom of bars up above 2nd stage)

	//30 points!!!
	
	
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
