#include "DriveToLineTask.h"
#include "jankyTask.h"
#include "WPILib.h"

using namespace std;

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
	X1=x*.6;
	Y1=y*.6;
	TwistAngle=twistangle;
	WaitTimer = GetClock();
	StartLeftSide = startLeftSide;
}

void DriveToLineTask::Run()
{
		
	if(WaitTimer + 1.0 < GetClock())
	{
		X = X1;
		Y = Y1;
	}
	unsigned int sensorvalue = Robot::driveTrain->lineSensorR->Get();
	
	if(!StartLeftSide)
		sensorvalue = Robot::driveTrain->lineSensorL->Get();
	
	if((sensorvalue == 0 && WaitTimer + 1.25 < GetClock()) || WaitTimer + 5 < GetClock())
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
