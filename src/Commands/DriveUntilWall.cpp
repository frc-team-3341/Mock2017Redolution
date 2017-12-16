#include "DriveUntilWall.h"
#include <WPILib.h>

DriveUntilWall::DriveUntilWall(double distanceOfStop){ //distanceOfStop is in inches
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);//the ultrasonic sensor will be in DriveTrain
	stopDistance = distanceOfStop;
}

// Called just before this Command runs the first time
void DriveUntilWall::Initialize()
{
	distanceUntil = stopDistance;
	currentDistance = drive -> getUltra();
	drive -> ultraSetup();

}

// Called repeatedly when this Command is scheduled to run
void DriveUntilWall::Execute()
{
	currentDistance = drive -> getUltra();
	distanceUntil = currentDistance - stopDistance;
	distanceUntil = distanceUntil / 200; //distanceUntil can be anywhere from 200 inches to 0 in.

	drive -> setSpeedLeft(distanceUntil);
	drive -> setSpeedRight(distanceUntil); //kinda PID but not really but its cool so its ok

}

// Make this return true when this Command no longer needs to run execute()
bool DriveUntilWall::IsFinished() {
	if ((drive -> getUltra()) <= stopDistance)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Called once after isFinished returns true
void DriveUntilWall::End()
{
	drive -> setSpeedLeft(0);
	drive -> setSpeedRight(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveUntilWall::Interrupted() {

}
