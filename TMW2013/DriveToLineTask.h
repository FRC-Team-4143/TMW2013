///
/// Team 1967 FIRST FRC - The Janksters - Notre Dame High School San Jose CA
///

/// JankyRobotTemplate for a simple robot for 2013

#ifndef _DRIVETOLineTASK_H
#include "jankyTask.h"
#define _DRIVETOLineTASK_H
#include "Robot.h"

class DriveToLineTask : public JankyTask	{
public:
	DriveToLineTask();
	virtual ~DriveToLineTask(void);
	void SetDriveVariables(float x, float y, float twistangle, bool startLeftSide);
	virtual void Run();
private:
	float X;
	float Y;
	float X1;
	float Y1;
	float TwistAngle;
	float Twist;
	float WaitTimer;
	bool StartLeftSide;
};

#endif
