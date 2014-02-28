#include "Picker.h"
#include "../RobotMap.h"
#include "../Commands/TelePickup.h"

Picker::Picker(): 
Subsystem("Picker")
{
	printf("Picker::Picker()\n");
	rightroller = RobotMap::rightroller;
	leftroller = RobotMap::leftroller;
	rightwingin = RobotMap::rightwingin;
	rightwingout = RobotMap::rightwingout;
	leftwingin = RobotMap::leftwingin;
	leftwingout = RobotMap::leftwingout;
	
	reardeploy = RobotMap::reardeploy;
	reardeployin = RobotMap::reardeployin;

	shooter = RobotMap::shooter;
	shooterpot = RobotMap::shooterpot;

	compressor = RobotMap::compressor;

	leftwingin->Set(true);
	leftwingout->Set(false);
	rightwingin->Set(true);
	rightwingout->Set(false);
	reardeploy->Set(false);
	reardeployin->Set(true);

	valvepulse = false;
	count = 0;
}
    
void Picker::InitDefaultCommand() {
	SetDefaultCommand(new TelePickup());
}

void Picker::StartShooter(float speed) {
	if(speed == 0.0) {
		return StopShooter();
	}
		
	compressor->Stop();
	shooter->Set(speed);
}

void Picker::StopShooter() {
	shooter->Set(0);
	compressor->Start();
}

float Picker::GetShooterPot() {
	return shooterpot->GetVoltage();
}

void Picker::DeployRear() {
	reardeploy->Set(true);
	reardeployin->Set(false);
}

void Picker::RetractRear() {
	reardeploy->Set(false);
	reardeployin->Set(true);
}


void Picker::RightWingOut() {
	rightwingin->Set(false);
	rightwingout->Set(true);
}

void Picker::RightWingIn() {
	rightwingin->Set(true);
	rightwingout->Set(false);
}

void Picker::LeftWingOut() {
	leftwingin->Set(false);
	leftwingout->Set(true);
}

void Picker::LeftWingIn() {
	leftwingin->Set(true);
	leftwingout->Set(false);
}

void Picker::LeftWingStay() {
	leftwingin->Set(false);
	leftwingout->Set(false);
}

void Picker::RightWingStay() {
	rightwingin->Set(false);
	rightwingout->Set(false);
}

void Picker::RightRollerIntake() {
	rightroller->Set(Relay::kReverse);
}

void Picker::RightRollerCatch() {
	rightroller->Set(Relay::kForward);
}

void Picker::RightRollerOff() {
	rightroller->Set(Relay::kOff);
}

void Picker::LeftRollerIntake() {
	leftroller->Set(Relay::kForward);
}

void Picker::LeftRollerCatch() {
	leftroller->Set(Relay::kReverse);
}

void Picker::LeftRollerOff() {
	leftroller->Set(Relay::kOff);
}


void Picker::TeleRun(Joystick * drive_joystick, Joystick * op_joystick) {
	count++;
	if(count > 8) {
		count = 0;
		valvepulse = !valvepulse;
	}
	
        float x = op_joystick->GetRawAxis(1);
        float z = op_joystick->GetRawAxis(4);

        if(fabs(x) < .15)
                x = 0;

	if(x > .75 || op_joystick->GetRawButton(3)) {
		LeftWingIn();
	}
	else if(x < -.75 || op_joystick->GetRawButton(1)) {
		LeftWingOut();
	}
	else if(x > .25 && valvepulse) {
		LeftWingIn();
	}
	else if(x < -.25 && valvepulse) {
		LeftWingOut();
	}
	else {
		LeftWingStay();
	}

        if(fabs(z) < .15)
                z= 0;
	
	if(z < -.75 || op_joystick->GetRawButton(3)) {
		RightWingIn();
	}
	else if(z > .75 || op_joystick->GetRawButton(2)) {
		RightWingOut();
	}
	else if(z < -.25 && valvepulse) {
		RightWingIn();
	}
	else if(z > .25 && valvepulse) {
		RightWingOut();
	}
	else
		RightWingStay();


	if(op_joystick->GetRawButton(5)) {
		LeftRollerIntake();
	}
	else if(op_joystick->GetRawButton(4)) {
		LeftRollerCatch();
	}
	else
		LeftRollerOff();



	if(op_joystick->GetRawButton(6)) {
		RightRollerIntake();
	} 
	else if(op_joystick->GetRawButton(4)) {
		RightRollerCatch();
	}
	else
		RightRollerOff();

	if(op_joystick->GetRawButton(8)) {
		DeployRear();
	}
	else {
		RetractRear();
		reardeploy->Set(false);
		reardeployin->Set(true);
	}

}
