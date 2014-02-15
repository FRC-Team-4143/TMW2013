#ifndef TELEPICKUP_H
#define TELEPICKUP_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class TelePickup: public Command {
public:
	TelePickup();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:

};

#endif
