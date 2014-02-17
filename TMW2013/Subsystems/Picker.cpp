#include "Picker.h"
#include "../RobotMap.h"
#include "../Commands/TelePickup.h"

#define LEFTIN .4
#define LEFTVERT .7
#define LEFTOUT 1.05
#define RIGHTIN .4
#define RIGHTVERT .7
#define RIGHTOUT 1.05

Picker::Picker(): 
Subsystem("Picker")
{
	printf("Picker::Picker()\n");
	//rightarm = RobotMap::rightarm;
	//leftarm = RobotMap::leftarm;
	rightroller = RobotMap::rightroller;
	leftroller = RobotMap::leftroller;
	//leftpot = RobotMap::leftpot;
	//rightpot = RobotMap::rightpot;
	//leftpid = RobotMap::leftpid;
	//rightpid = RobotMap::rightpid;
	//leftpid->SetSetpoint(LEFTVERT);
	//rightpid->SetSetpoint(RIGHTVERT);
	//leftpid->Enable();
	//rightpid->Enable();
	rightwingin = RobotMap::rightwingin;
	rightwingout = RobotMap::rightwingout;
	leftwingin = RobotMap::leftwingin;
	leftwingout = RobotMap::leftwingout;
}
    
void Picker::InitDefaultCommand() {
	SetDefaultCommand(new TelePickup());
}

void Picker::TeleRun(Joystick * joystick) {
        float x = joystick->GetRawAxis(1);
        if(fabs(x) < .15)
                x = 0;
	if(x > .5) {
		//leftpid->SetSetpoint(LEFTIN);
		leftwingin->Set(true);
		leftwingout->Set(false);
	}
	else if(x < -.5) {
		//leftpid->SetSetpoint(LEFTOUT);
		leftwingin->Set(false);
		leftwingout->Set(true);
	}

        float z = joystick->GetRawAxis(4);
        if(fabs(z) < .15)
                z= 0;
	
	if(z > .5) {
		//rightpid->SetSetpoint(LEFTIN);
		rightwingin->Set(true);
		rightwingout->Set(false);
	}
	else if(z < -.5) {
		//leftpid->SetSetpoint(LEFTOUT);
		rightwingin->Set(false);
		rightwingout->Set(true);
	}


	if(joystick->GetRawButton(1)) {
		//leftpid->SetSetpoint(LEFTVERT);
		//rightpid->SetSetpoint(RIGHTVERT);
		leftwingin->Set(false);
		leftwingout->Set(true);
		rightwingin->Set(false);
		rightwingout->Set(true);
	}

	if(joystick->GetRawButton(2)) {
		//leftpid->SetSetpoint(LEFTOUT);
		//rightpid->SetSetpoint(RIGHTOUT);
		leftwingin->Set(false);
		leftwingout->Set(true);
		rightwingin->Set(false);
		rightwingout->Set(true);
	}

	if(joystick->GetRawButton(3)) {
		//leftpid->SetSetpoint(LEFTIN);
		//rightpid->SetSetpoint(RIGHTIN);
		leftwingin->Set(true);
		leftwingout->Set(false);
		rightwingin->Set(true);
		rightwingout->Set(false);
	}

	if(joystick->GetRawButton(4)) {
		leftroller->Set(Relay::kReverse);
		rightroller->Set(Relay::kForward);
	}

	if(joystick->GetRawButton(5)) {
		leftroller->Set(Relay::kForward);
	}

	if(joystick->GetRawButton(6)) {
		rightroller->Set(Relay::kReverse);
	}

	if(!joystick->GetRawButton(4) && !joystick->GetRawButton(5)) {
		leftroller->Set(Relay::kOff);
	}

	if(!joystick->GetRawButton(4) && !joystick->GetRawButton(6)) {
		rightroller->Set(Relay::kOff);
	}
}
