#include "Task.h"

void Task::setName()
{
	cin >> name;
}

string Task::getName()
{
	return name;
}

void Task::setDescription()
{
	cin >> description;
}

string Task::getDescription()
{
	return description;
}

void Task::setStatus(bool status)
{
	this->status = status;
}

bool Task::getStatus()
{
	return status;
}

void Task::setPriority(int priority)
{
	this->priority = priority;
}

int Task::getPriority()
{
	return priority;
}
