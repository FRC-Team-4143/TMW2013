#include "TriggerMonitor.h"
#include "jankyTask.h"
#include "WPILib.h"

//Constructor
TriggerMonitor::TriggerMonitor()
{
	
}

//Destructor
TriggerMonitor::~TriggerMonitor()
{

}

void TriggerMonitor::Run()
{
	if (!Robot::shooter->triggerStop->Get() && Robot::shooter->GetFireFlag())
	{
		Robot::shooter->SetTriggerStopFlag(true);
		Robot::shooter->SetFireFlag(false);
	}
}
