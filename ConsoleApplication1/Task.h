#pragma once
#include <string>
using namespace std;

class Task
{
public:
	void setName(string name);
	string getName();
	void setDescription(string description);
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

