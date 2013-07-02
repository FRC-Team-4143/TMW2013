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
		if ((!Robot::shooter->triggerStop->Get() && Robot::shooter->GetFireTimer() + .15 < GetClock()))
		{
			if (Robot::shooter->trigger->Get() == Relay::kForward)
			{
				Robot::shooter->trigger->Set(Relay::kReverse);
				done = true;
			}
		}
	
		if(Robot::shooter->trigger->Get() == Relay::kReverse)
		{
			donecount++;
		}
		else
		{
			donecount = 0;
		}
		
		if (donecount > 10)
		{
			Robot::shooter->trigger->Set(Relay::kOff);
		}
		
		if (!done)
		{
			if (Robot::shooter->GetFireTimer() + 1 > GetClock())
				Robot::shooter->trigger->Set(Relay::kForward);
			if (Robot::shooter->GetFireTimer() + 1 <= GetClock() && Robot::shooter->GetFireTimer() + 1.1 > GetClock())
				Robot::shooter->trigger->Set(Relay::kReverse);
			if (Robot::shooter->GetFireTimer() + 1.1 <= GetClock() && Robot::shooter->GetFireTimer() + 2.1 > GetClock())
				Robot::shooter->trigger->Set(Relay::kForward);
			if (Robot::shooter->GetFireTimer() + 2.1 <= GetClock() && Robot::shooter->GetFireTimer() + 2.2 > GetClock())
				Robot::shooter->trigger->Set(Relay::kReverse);
			if (Robot::shooter->GetFireTimer() + 2.2 <= GetClock() && Robot::shooter->GetFireTimer() + 3.5 > GetClock())
				Robot::shooter->trigger->Set(Relay::kForward);
		}
	}
	else {
		Robot::shooter->trigger->Set(Relay::kOff);
	}
}
