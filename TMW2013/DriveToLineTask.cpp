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
	TwistAngle=twistangle;
}

void DriveToLineTask::Run()
{
	if(Robot::driveTrain->lineSensorL->Get() == 1)
	{
		Twist = (TwistAngle - Robot::driveTrain->gyroscope->GetAngle())/150;
		if(Twist>.2)
			Twist=.2;
		if(Twist<-.2)
			Twist=-.2;
		Robot::driveTrain->Pivot(Twist, Y, X, true);
	}
	else
		Robot::driveTrain->Pivot(0, 0, 0, true);

	
	SmartDashboard::PutNumber("X", X);
	SmartDashboard::PutNumber("Y", Y);
	SmartDashboard::PutNumber("TwistAngle", TwistAngle);
	SmartDashboard::PutNumber("Twist", Twist);
}
