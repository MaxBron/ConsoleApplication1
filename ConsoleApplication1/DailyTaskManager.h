#pragma once
#include "TaskManager.h"
#include "DailyTask.h"
#include <list>
#include <iostream>

class DailyTaskManager : public TaskManager
{
private:
	list<DailyTask> _DailyTasks = {};
public:
	void getTask() override;
	void setTask() override;
};

