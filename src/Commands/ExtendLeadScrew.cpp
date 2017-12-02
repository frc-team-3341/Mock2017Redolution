#include "ExtendLeadScrew.h"

ExtendLeadScrew::ExtendLeadScrew() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//this will require the main bag motor
}

// Called just before this Command runs the first time
void ExtendLeadScrew::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ExtendLeadScrew::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ExtendLeadScrew::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ExtendLeadScrew::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExtendLeadScrew::Interrupted() {

}
