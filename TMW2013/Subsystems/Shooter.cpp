// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Shooter.h"
#include "../Robotmap.h"
#include "math.h"
#include "../Commands/ShooterStop.h"
#include "../Commands/ShooterRun.h"
Shooter::Shooter() : Subsystem("Shooter") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	wheelShooterEntry = RobotMap::shooterWheelShooterEntry;
	wheelShooterMiddle = RobotMap::shooterWheelShooterMiddle;
	wheelShooterExit = RobotMap::shooterWheelShooterExit;
	shooterAnglePos = RobotMap::shooterShooterAnglePos;
	shooterAngleSteer = RobotMap::shooterShooterAngleSteer;
	shooterAngle = RobotMap::shooterShooterAngle;
	triggerStop = RobotMap::shooterTriggerStop;
	trigger = RobotMap::shooterTrigger;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	runtoggle = true;
	entryset = 0;
	exitset = 0;
	middleset = 0;
	entryvolt = 0;
	exitvolt = 0;
	middlevolt = 0;
	prevAngle = 0;
	shutoffTimer = GetClock() + 3;
	shootertimer = GetClock();
	EntrySOTimer = 0;
	EntrySOFlag = false;
	MiddleSOTimer = 0;
	MiddleSOFlag = false;
	ExitSOTimer = 0;
	ExitSOFlag = false;
	EntryPrevCurrent = 0;
	ExitPrevCurrent = 0;
	MiddlePrevCurrent = 0;
	firetime = 0;
	shooterRamp = true;
	TriggerStopFlag = false;
	FireFlag = false;
	shootercounter = 0;
	firetimer = GetClock();
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Shooter::RunAtOutput() {
/*	entryset = entryset + (entryvolt - wheelShooterEntry->GetOutputVoltage())/12;
	exitset = exitset + (exitvolt - wheelShooterExit->GetOutputVoltage())/12;
	
	//control output voltages of shooter motors
	if(wheelShooterEntry->GetOutputVoltage() < -10 || wheelShooterExit->GetOutputVoltage() > 10) {
		entryset = -.6;
		exitset = .8;
	}
	else {
		entryset = entryset + (entryvolt - wheelShooterEntry->GetOutputVoltage())/12;
		exitset = exitset + (exitvolt - wheelShooterExit->GetOutputVoltage())/12;
	}
*/	
	if(!shooterRamp) {
		
		if(wheelShooterEntry->GetOutputCurrent() - EntryPrevCurrent > 150) {
			firetime = GetClock();
			shooterRamp = true;
		}
		
		if(wheelShooterExit->GetOutputCurrent() - ExitPrevCurrent > 120) {
			firetime = GetClock();
			shooterRamp = true;
		}
		
		if(wheelShooterMiddle->GetOutputCurrent() - MiddlePrevCurrent > 150) {
			firetime = GetClock();
			shooterRamp = true;
		}
	}
		
	if(firetime + .25 > GetClock()) {
		wheelShooterEntry->Set(.7);
		entryset = .7;
		wheelShooterMiddle->Set(.7);
		middleset = .7;
		wheelShooterExit->Set(-1);
		exitset = -1;
		}
	else {
		shooterRamp = false;
		
		entryset = entryset + (entryvolt - wheelShooterEntry->GetOutputVoltage())/12;
		if(entryset > 1)
			entryset = 1;
		if (entryset < -1)
			entryset = -1;
		wheelShooterEntry->Set(entryset);
		middleset = middleset + (middlevolt - wheelShooterMiddle->GetOutputVoltage())/12;
		if (middleset > 1)
			middleset = 1;
		if (middleset < -1)
			middleset = -1;
		wheelShooterMiddle->Set(middleset);
		exitset = exitset + (exitvolt - wheelShooterExit->GetOutputVoltage())/12;
		if (exitset > 1)
			exitset = 1;
		if (exitset < -1)
			exitset = -1;
		wheelShooterExit->Set(exitset);
		}
	
	
	
	float currentlimit = 2100;
	float currenttimeout = 1.5;
	
	//protect shooter exit motor
	if(wheelShooterExit->GetOutputCurrent() > currentlimit) {
		if(ExitSOTimer < GetClock() && !ExitSOFlag) {
			ExitSOTimer = GetClock()+currenttimeout;
			ExitSOFlag = true;
		}
		if(ExitSOTimer < GetClock() && ExitSOFlag) {
			exitvolt = 0;
			ExitSOFlag = false;
		}
	}
	else
	{
		ExitSOFlag = false;
	}
	
	//protect shooter entry motor
	if(wheelShooterEntry->GetOutputCurrent() > currentlimit) {
		if(EntrySOTimer < GetClock() && !EntrySOFlag) {
			EntrySOTimer = GetClock()+currenttimeout;
			EntrySOFlag = true;
		}
		if(EntrySOTimer < GetClock() && EntrySOFlag) {
			entryvolt = 0;
			EntrySOFlag = false;
		}
	}
	else
	{
		EntrySOFlag = false;
	}
	//protect angle motor
	if(shutoffTimer < GetClock())
		shooterAngle->Disable();
}
void Shooter::SetAngle(int angle) {
	if(prevAngle != angle) {
		shooterAngle->Enable();
		shooterAngle->SetSetpoint(angle - angleOffset);
		shutoffTimer = GetClock() + 5;
		prevAngle = angle;
	}
}
int Shooter::GetCorrectedAngle() {
	return shooterAnglePos->GetAverageValue() - angleOffset;
}
void Shooter::SetSpeeds(float entry, float middle, float exit, bool resetTimer) {
	if((entryvolt != entry || exitvolt != exit || middlevolt != middle) && resetTimer)
		shootertimer = GetClock() + 1;
		
	entryvolt = entry;
	exitvolt = exit;
	middlevolt = middle;
}
float Shooter::GetEntrySpeed() {
	return entryset;
}
float Shooter::GetExitSpeed() {
	return exitset;
}
float Shooter::GetMiddleSpeed() {
	return  middleset;
}

bool Shooter::IsShooterReady() {
	return shootertimer < GetClock()  && firetime + .4 < GetClock() && wheelShooterEntry->GetOutputCurrent() > 1;	
}
void Shooter::SetFireTimer() {
	//shootertimer = GetClock() + .5;
	firetimer = GetClock();
}
float Shooter::GetFireTime() {
	return firetime;
}
float Shooter::GetFireTimer() {
	return firetimer;
}
bool Shooter::GetTriggerStopFlag() {
	return TriggerStopFlag;
}	
void Shooter::SetTriggerStopFlag(bool flag) {
	TriggerStopFlag = flag;
}
void Shooter::SetFireFlag(bool flag) {
	FireFlag = flag;
}
bool Shooter::GetFireFlag() {
	return FireFlag;
}
int Shooter::GetShooterCounter() {
	return shootercounter;
}
