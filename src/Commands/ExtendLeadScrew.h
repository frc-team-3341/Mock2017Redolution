#ifndef ExtendLeadScrew_H
#define ExtendLeadScrew_H

#include "../CommandBase.h"

class ExtendLeadScrew : public CommandBase {
public:
	ExtendLeadScrew();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ExtendLeadScrew_H
