#include "TriggerMonitor.h"
#include "jankyTask.h"
#include "WPILib.h"

//Constructor
TriggerMonitor::TriggerMonitor()
{
	donecount = 0;
	done = false;
	lastFireTimer = 0;
}

//Destructor
TriggerMonitor::~TriggerMonitor()
{

}

void TriggerMonitor::Run()
{
	
	if (Robot::shooter->GetFireTimer() != lastFireTimer) {
		done = false;
	}

	lastFireTimer = Robot::shooter->GetFireTimer();
	
	if (Robot::shooter->GetFireTimer() + 3.5 > GetClock())
	{
		if ((!Robot::shooter->triggerStop->Get() && Robot::shooter->GetFireTimer() + .05 < GetClock()))
		{
			if (Robot::shooter->trigger->Get() > 0)
			{
				Robot::shooter->trigger->Set(-.4);
				done = true;
			}
		}
	
		if(Robot::shooter->trigger->Get() < 0)
		{
			donecount++;
		}
		else
		{
			donecount = 0;
		}
		
		if (donecount > 10)
		{
			Robot::shooter->trigger->Set(0);
		}
		
		if (!done)
		{
			if (Robot::shooter->GetFireTimer() + 1 > GetClock())
				Robot::shooter->trigger->Set(1);
			if (Robot::shooter->GetFireTimer() + 1 <= GetClock() && Robot::shooter->GetFireTimer() + 1.5 > GetClock())
				Robot::shooter->trigger->Set(0.01);
			if (Robot::shooter->GetFireTimer() + 1.5 <= GetClock() && Robot::shooter->GetFireTimer() + 2.5 > GetClock())
				Robot::shooter->trigger->Set(1);
			if (Robot::shooter->GetFireTimer() + 2.5 <= GetClock() && Robot::shooter->GetFireTimer() + 3 > GetClock())
				Robot::shooter->trigger->Set(0.01);
			if (Robot::shooter->GetFireTimer() + 3 <= GetClock() && Robot::shooter->GetFireTimer() + 3.5 > GetClock())
				Robot::shooter->trigger->Set(1);
		}
	}
	else {
		Robot::shooter->trigger->Set(0);
	}
}
