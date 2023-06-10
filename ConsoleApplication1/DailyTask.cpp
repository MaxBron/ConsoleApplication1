#define _CRT_SECURE_NO_WARNINGS
#include "DailyTask.h"
#include <ctime>
#include <windows.h>

void DailyTask::setDt()
{
    time_t now = time(0);
    dt = ctime(&now);
    tm* gmtm = gmtime(&now);
}

string DailyTask::getDt()
{
    return dt;
}

void DailyTask::perform()
{
    setStatus(true);
}
