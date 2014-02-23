#include "threeballauto.h"
#include "Drive.h"
#include "ShootCommand.h"
#include "ShootSlowCommand.h"
#include "DeployRear.h"

ThreeBallAuto::ThreeBallAuto() {
	AddSequential(new DeployRear(1.)); // throw out back wait 1 second
	AddSequential(new ShootSlowCommand(NULL)); // bring down arm
	AddSequential(new Drive(.3, 0, 0, 1.0)); // drive forward
	AddSequential(new WaitCommand(1.0)); // wait to let ball settle
	AddSequential(new ShootCommand(NULL)); // shoot
//	AddSequential(new Unfold());
//	AddSequential(new Drive(0, 0, 0, .1));
//	AddSequential(new Drive(0, .3, 0, .5));
//	AddSequential(new Drive(0, 0, .3, .5));
//	AddSequential(new Drive(.3, 0, 0, .5));
//	AddSequential(new Drive(0, 0, -.3, .5));
//	AddSequential(new ShootCommand(NULL));
//	AddSequential(new GetRightBall());
//	AddSequential(new ShootCommand(NULL));
//	AddSequential(new GetLeftBall());
//	AddSequential(new ShootCommand(NULL));
//	AddSequential(new Wingsout());
}
