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
	
	if (Robot::shooter->GetFireTimer() + 3.5 > GetClock())  //timeout for fire attempt
	{
		if (!Robot::shooter->triggerStop->Get() && //if photo eye is made
			Robot::shooter->GetFireTimer() + .15 < GetClock()  && //and past wait time for trigger to get off photo eye at start
			Robot::shooter->trigger->Get() == Relay::kForward && //and running forward
			!Robot::oi->getDriverJoystick()->GetRawButton(2)) //and fire button is not pressed
		{
			Robot::shooter->trigger->Set(Relay::kReverse); //start running backwards
			done = true;
		
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
