#pragma once
#include "TaskManager.h"
class DailyTaskManager : public TaskManager
{
	void getTask() override;
	void setTask() override;
};

