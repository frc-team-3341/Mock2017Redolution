#ifndef LeadScrew_H
#define LeadScrew_H

#include <Commands/Subsystem.h>

class LeadScrew : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	LeadScrew();
	void InitDefaultCommand();
};

#endif  // LeadScrew_H
