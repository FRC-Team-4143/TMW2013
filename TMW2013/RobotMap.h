// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"
#include "AnalogChannelVolt.h"
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static AnalogChannelVolt* driveTrainFrontRightPos;
	static SpeedController* driveTrainFrontRightSteer;
	static PIDController* driveTrainFrontRight;
	static AnalogChannelVolt* driveTrainFrontLeftPos;
	static SpeedController* driveTrainFrontLeftSteer;
	static PIDController* driveTrainFrontLeft;
	static AnalogChannelVolt* driveTrainRearRightPos;
	static SpeedController* driveTrainRearRightSteer;
	static PIDController* driveTrainRearRight;
	static AnalogChannelVolt* driveTrainRearLeftPos;
	static SpeedController* driveTrainRearLeftSteer;
	static PIDController* driveTrainRearLeft;
	static SpeedController* driveTrainFrontLeftDrive;
	static SpeedController* driveTrainFrontRightDrive;
	static SpeedController* driveTrainRearLeftDrive;
	static SpeedController* driveTrainRearRightDrive;
	static SpeedController* shooter;
	static AnalogChannelVolt* shooterpot;
	static Relay* rightwing;
	static Relay* leftwing;
	static Relay* rightroller;
	static Relay* leftroller;
	static DigitalModule* i2cmodule;
	static Compressor* compressor;
	static Solenoid* rightwingin;
	static Solenoid* rightwingout;
	static Solenoid* leftwingin;
	static Solenoid* leftwingout;
	static Solenoid* reardeploy;
	static Solenoid* reardeployin;
	static I2C* m_i2c;
	//constexpr static float CamStop = 1.5;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static void init();
};
#endif
