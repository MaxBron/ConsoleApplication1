
#pragma once
#include "Task.h"
#include "ITask.h"

class DailyTask : public Task, ITask
{
public:
	void setDt();
	string getDt();
	void perform() override;
private:
	string dt;
};

