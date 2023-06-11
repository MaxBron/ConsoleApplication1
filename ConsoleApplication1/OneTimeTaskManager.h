#pragma once
#include "TaskManager.h"
class OneTimeTaskManager : public TaskManager
{
	void getTask() override;

	void setTask() override;
};

