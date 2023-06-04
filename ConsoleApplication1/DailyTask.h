
#pragma once
#include "Task.h"
#include <ctime>
#include <windows.h>

class DailyTask : public Task
{
public:
	void setDt();
	string getDt();
private:
	string dt;
};

