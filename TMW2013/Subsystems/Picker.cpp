#include "Picker.h"
#include "../RobotMap.h"
#include "../Commands/TelePickup.h"

Picker::Picker(): 
Subsystem("Picker")
{
	printf("Picker::Picker()\n");
	rightarm = RobotMap::rightarm;
	leftarm = RobotMap::leftarm;
	rightroller = RobotMap::rightroller;
	leftroller = RobotMap::leftroller;
}
    
void Picker::InitDefaultCommand() {
	SetDefaultCommand(new TelePickup());
}

void Picker::TeleRun(Joystick * joystick) {
        float x = joystick->GetRawAxis(1);
        if(fabs(x) < .15)
                x = 0;

        float z = joystick->GetRawAxis(4);
        if(fabs(z) < .15)
                z= 0;

	rightarm->Set(x);
	leftarm->Set(z);

	if(joystick->GetRawButton(1))
		rightroller->Set(Relay::kReverse);
	else
		rightroller->Set(Relay::kOff);

	if(joystick->GetRawButton(2))
		leftroller->Set(Relay::kForward);
	else
		leftroller->Set(Relay::kOff);

}
