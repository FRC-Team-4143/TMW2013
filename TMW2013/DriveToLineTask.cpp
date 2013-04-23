#include "DriveToLineTask.h"
#include "jankyTask.h"
#include "WPILib.h"

//Constructor
DriveToLineTask::DriveToLineTask()
{

}

//Destructor
DriveToLineTask::~DriveToLineTask()
{

}

void DriveToLineTask::SetDriveVariables(float x, float y, float twistangle, bool startLeftSide)
{
	X=x;
	Y=y;
	X1=x*.5;
	Y1=y*.5;
	TwistAngle=twistangle;
	WaitTimer = GetClock();
	StartLeftSide = startLeftSide;
}

void DriveToLineTask::Run()
{
	if(Robot::driveTrain->wheelSpokeCounter->Get() > 25)
	{
		X = X1;
		Y = Y1;
	}
	unsigned int sensorvalue = !Robot::driveTrain->lineSensorR->Get();
	
	if(!StartLeftSide)
		sensorvalue = !Robot::driveTrain->lineSensorL->Get();
	
	if(sensorvalue && Robot::driveTrain->wheelSpokeCounter->Get() > 50)
	{
		Robot::driveTrain->SideLock();
		Robot::driveTrain->SetDriveBackFlag(true);		
	}
	else
	{
		Twist = (TwistAngle - Robot::driveTrain->gyroscope->GetAngle())/150;
		if(Twist>.15)
			Twist=.15;
		if(Twist<-.15)
			Twist=-.15;
		Robot::driveTrain->Pivot(Twist, Y, X, true);
	}

	/*
	SmartDashboard::PutNumber("X", X);
	SmartDashboard::PutNumber("Y", Y);
	SmartDashboard::PutNumber("TwistAngle", TwistAngle);
	SmartDashboard::PutNumber("Twist", Twist);*/
}
