///
/// Team 1967 FIRST FRC - The Janksters - Notre Dame High School San Jose CA
///

/// JankyRobotTemplate for a simple robot for 2013

#ifndef _FOLLOWLINETASK_H
#include "jankyTask.h"
#define _FOLLOWLINETASK_H
#include "Robot.h"

class FollowLineTask : public JankyTask	{
public:
	FollowLineTask(void);
	virtual ~FollowLineTask(void);
	void SetDriveVariables(float x, float y, float twistangle);
	virtual void Run();

private:
	float Y;
	float X;
	float Twist;
	float TwistAngle;
};

#endif
