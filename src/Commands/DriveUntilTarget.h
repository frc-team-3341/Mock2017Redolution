#ifndef DriveUntilTarget_H
#define DriveUntilTarget_H

#include "../CommandBase.h"

class DriveUntilTarget : public CommandBase {
public:
	DriveUntilTarget();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveUntilTarget_H
