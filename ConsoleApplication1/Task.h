#pragma once
#include <string>
#include <iostream>
using namespace std;

class Task
{
public:
	void setName();
	string getName();
	void setDescription();
	string getDescription();
	void setStatus(bool status);
	bool getStatus();
	void setPriority(int priority);
	int getPriority();
private:
	string name, description;
	bool status;
	int priority;
};

