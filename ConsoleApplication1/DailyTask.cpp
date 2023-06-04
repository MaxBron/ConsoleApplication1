
#include "DailyTask.h"

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
