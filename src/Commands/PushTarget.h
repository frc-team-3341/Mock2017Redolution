#ifndef PushTarget_H
#define PushTarget_H

#include "../CommandBase.h"

class PushTarget : public CommandBase {
public:
	PushTarget();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // PushTarget_H
