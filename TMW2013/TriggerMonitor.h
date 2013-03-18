///
/// Team 1967 FIRST FRC - The Janksters - Notre Dame High School San Jose CA
///

/// JankyRobotTemplate for a simple robot for 2013

#ifndef _TRIGGERMONITOR_H
#include "jankyTask.h"
#define _TRIGGERMONITOR_H
#include "Robot.h"

class TriggerMonitor : public JankyTask	{
public:
	TriggerMonitor(void);
	virtual ~TriggerMonitor(void);

	virtual void Run();

};

#endif
