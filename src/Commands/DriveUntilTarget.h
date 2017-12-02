#ifndef DriveUntilTarget_H
#define DriveUntilTarget_H

using namespace std;

#include "../CommandBase.h"

class DriveUntilTarget : public CommandBase {
public:
	DriveUntilTarget();
	void Initialize();
	bool TargetFound();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	string CVStatus;
};

#endif  // DriveUntilTarget_H
