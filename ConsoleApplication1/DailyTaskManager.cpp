#include "DailyTaskManager.h"

void DailyTaskManager::getTask()
{
}

void DailyTaskManager::setTask()
{
	DailyTask task;
	_DailyTasks.push_back(task);
	cout << "Enter the name of the task" << endl;
}
