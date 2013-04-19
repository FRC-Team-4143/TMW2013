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

void DriveToLineTask::SetDriveVariables(float x, float y, float twistangle)
{
	X=x;
	Y=y;
	X1=x*.5;
	Y1=y*.5;
	TwistAngle=twistangle;
	WaitTimer = GetClock();
}

void DriveToLineTask::Run()
{
	if(WaitTimer + 1 < GetClock())
	{
		X = X1;
		Y = Y1;
	}
	
	if(!Robot::driveTrain->lineSensorR->Get() && WaitTimer + 2 < GetClock())
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
