#include "threeballauto.h"
#include "Drive.h"
#include "ShootCommand.h"
#include "ShootSlowCommand.h"
#include "DeployRear.h"
#include "PickerState.h"

ThreeBallAuto::ThreeBallAuto() {
	DriverStation * DS = DriverStation::GetInstance();

	//float camstop = DS->GetAnalogIn(1);
	float rearwait = DS->GetAnalogIn(2);
	float drivespeed = DS->GetAnalogIn(3);
	float drivetime = DS->GetAnalogIn(4);

	bool topshoot = DS->GetDigitalIn(1);
	bool rightpickup = DS->GetDigitalIn(2);
	bool leftpickup = DS->GetDigitalIn(3);
	bool drivestraight = DS->GetDigitalIn(4);
	bool drivevision = DS->GetDigitalIn(5);
	bool settle1 = DS->GetDigitalIn(6);
	bool settle2 = DS->GetDigitalIn(7);
	bool settle3 = DS->GetDigitalIn(8);

	AddSequential(new Drive(0, 0, 0, true, 0)); // drive stop
	AddSequential(new DeployRear(0)); // throw out back wait var seconds
	AddSequential(new PickerState(1, 0, 1, 0, .2));
	AddSequential(new PickerState(0, 0, 0, 0, 0));
	AddSequential(new DeployRear(rearwait)); // throw out back wait var seconds
	AddSequential(new PickerState(rightpickup, rightpickup, leftpickup, leftpickup, 0));
	AddSequential(new ShootSlowCommand(NULL)); // bring down arm
	AddSequential(new PickerState(0, 0, 0, 0, 0));

	if(drivevision) {
		printf("visionpackket %c\n", Robot::visionpacket);
		if(Robot::visionpacket == '1') //right hot target
			AddSequential(new Drive(drivespeed, -drivespeed, 0, true, drivetime)); // drive left
		else
			AddSequential(new Drive(drivespeed, drivespeed, 0,  true, drivetime)); // drive right
	} else if(drivestraight) {
		AddSequential(new Drive(drivespeed, 0, 0, true, drivetime)); // drive straight
	}

	AddSequential(new WaitCommand(1.0)); // wait to let ball settle

	if(settle1)
		AddSequential(new WaitCommand(.5)); // wait to let ball settle
	if(settle2)
		AddSequential(new WaitCommand(.5)); // wait to let ball settle
	if(settle3)
		AddSequential(new WaitCommand(.5)); // wait to let ball settle

	if(topshoot)
		AddSequential(new ShootCommand(NULL)); // shoot

	if(rightpickup) {
		AddSequential(new PickerState(0, 1, 0, 0, 1));
		AddSequential(new PickerState(-1, 1, 0, 0, 1));
		AddSequential(new PickerState(1, 0, 0, 0, 0));
		AddSequential(new ShootCommand(NULL)); // shoot
	}

	if(leftpickup) {
		AddSequential(new PickerState(0, 0, 0, 1, 1));
		AddSequential(new PickerState(0, 0, -1, 1, 1));
		AddSequential(new PickerState(0, 0, 1, 0, 0));
		AddSequential(new ShootCommand(NULL)); // shoot
	}
	AddSequential(new Drive(0, 0, 0, true, 0)); // drive stop
}
