#include "DriveUntilTarget.h"

DriveUntilTarget::DriveUntilTarget() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

bool DriveUntilTarget::TargetFound()
{
	if(CVStatus.equals("vertical"))
	{
		return true;
		//.equals is not the right method but I don't know what it is in C ++
	}
}

// Called just before this Command runs the first time
void DriveUntilTarget::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveUntilTarget::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool DriveUntilTarget::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveUntilTarget::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveUntilTarget::Interrupted() {

}
