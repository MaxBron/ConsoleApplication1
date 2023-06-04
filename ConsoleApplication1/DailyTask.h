
#pragma once
#include "Task.h"


class DailyTask : public Task
{
public:
	void setDt();
	string getDt();
private:
	string dt;
};

