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
	X1=x*.3;
	Y1=y*.3;
	TwistAngle=twistangle;
	WaitTimer = GetClock();
	StartLeftSide = startLeftSide;
}

void DriveToLineTask::Run()
{
	if(WaitTimer + 1 < GetClock())
	{
		X = X1;
		Y = Y1;
	}
	unsigned int sensorvalue = !Robot::driveTrain->lineSensorR->Get();
	
	if(!StartLeftSide)
		sensorvalue = !Robot::driveTrain->lineSensorL->Get();
	
	if((sensorvalue && WaitTimer + 1.5 < GetClock()) || WaitTimer + 4 < GetClock())
	{
		Robot::driveTrain->SideLock();
		Robot::driveTrain->SetDriveBackFlag(true);		
	}
	else
	{
		Twist = (TwistAngle - Robot::driveTrain->gyroscope->GetAngle())/300;
		if(Twist>.8)
			Twist=.8;
		if(Twist<-.8)
			Twist=-.8;
		Robot::driveTrain->Crab(Twist, Y, X, true);
	}

	/*
	SmartDashboard::PutNumber("X", X);
	SmartDashboard::PutNumber("Y", Y);
	SmartDashboard::PutNumber("TwistAngle", TwistAngle);
	SmartDashboard::PutNumber("Twist", Twist);*/
}
