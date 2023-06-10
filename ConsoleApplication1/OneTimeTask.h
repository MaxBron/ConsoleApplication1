#pragma once
#include "Task.h"
#include "ITask.h"
class OneTimeTask : public Task, public ITask
{
	void perform() override;
};

