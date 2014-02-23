#include "threeballauto.h"
#include "Drive.h"
#include "ShootCommand.h"

ThreeBallAuto::ThreeBallAuto() {
//	AddSequential(new Unfold());
	AddSequential(new Drive(0, .5, 0, 2.0));
	AddSequential(new ShootCommand(NULL));
//	AddSequential(new GetRightBall());
//	AddSequential(new ShootCommand(NULL));
//	AddSequential(new GetLeftBall());
//	AddSequential(new ShootCommand(NULL));
//	AddSequential(new Wingsout());
}
