
#include <iostream>
#include <ctime>
#include<string>
#include <windows.h>
#include "Task.h"
#include "DailyTask.h"

using namespace std;


int main() {
    DailyTask t, x;
    t.setDt();
    
    
    Sleep(5000);
    x.setDt();
    cout << x.getDt();
    cout << t.getDt();
    return 0;
}
