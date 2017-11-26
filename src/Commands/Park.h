#ifndef Park_H
#define Park_H

#include "../CommandBase.h"

class Park : public CommandBase {
public:
	Park();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Park_H
