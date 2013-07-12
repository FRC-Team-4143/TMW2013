#include "FollowLineTask.h"
#include "jankyTask.h"
#include "WPILib.h"

//Constructor
FollowLineTask::FollowLineTask()
{

}

//Destructor
FollowLineTask::~FollowLineTask()
{

}

void FollowLineTask::SetDriveVariables(float x, float y, float twistangle)
{
	Y=y;
	X=x;
	TwistAngle=twistangle;
	Twist=0;
}

void FollowLineTask::Run()
{
	if(!Robot::driveTrain->lineSensorL->Get())
		X = -.05;
	else if(!Robot::driveTrain->lineSensorR->Get())
		X = .05;
	else
		X=0;
	
	Twist = (TwistAngle - Robot::driveTrain->gyroscope->GetAngle())/150;
	if(Twist>.2)
		Twist=.2;
	if(Twist<-.2)
		Twist=-.2;


	Robot::driveTrain->Crab(Twist, Y, X, false);
	
//Code for using ultrasonic sensor during auto.  Comment out line above and uncomment if statement below.
/*	if(Robot::driveTrain->ultraSonic->GetAverageValue() > 45)	
		Robot::driveTrain->Crab(Twist, Y, X, false);
	else
		Robot::driveTrain->Crab(Twist, -2*Y, -2*X, false);
*/		
	}
