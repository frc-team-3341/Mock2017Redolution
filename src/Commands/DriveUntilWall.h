#ifndef DriveUntilWall_H
#define DriveUntilWall_H
#include <WPILib.h>
#include "../CommandBase.h"

class DriveUntilWall : public CommandBase {
public:
	DriveUntilWall(double distanceOfStop);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	double distanceUntil;
	double stopDistance;
	double currentDistance;
};

#endif  // DriveUntilWall_H
