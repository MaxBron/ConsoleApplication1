#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include<string>
#include <windows.h>
using namespace std;

class Task {
public:
    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }

    void setDecription(string description) {
        this->description = description;
    }

    string getDesription() {
        return this->description;
    }

    void setStatus(bool status) {
        this->status = status;
    }

    bool getStatus() {
        return this->status;
    }

    void setPriority(int priority) {
        this->priority = priority;
    }

    int getPriority() {
        return this->priority;
    }

private:
    string name, description;
    bool status;
    int priority;
};

class DailyTask : public Task {
private:
    string dt;
    
public:
    void setDt() {
        time_t now = time(0);
        dt = ctime(&now);
        tm* gmtm = gmtime(&now);
    }
    string getDt() {
        return this->dt;
    }
    
};

class OneTimeTask : public Task {

};

int main() {

    return 0;
}
