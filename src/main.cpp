#include <iostream>

#include "diveObj/DiveLog.h"

using namespace std;

int main()
{
    auto *diveLog = new diveObj::DiveLog();
    auto *diveEntry = new diveObj::DiveEntry();

    diveEntry->set_last_updated(chrono::system_clock::now());
    diveEntry->set_max_depth(30);
    diveEntry->set_percent_oxygen(21.0);

    struct tm diveTimeInfo{};
        diveTimeInfo.tm_year = 2025 - 1900;
        diveTimeInfo.tm_mon = 2; // March
        diveTimeInfo.tm_mday = 3;
        diveTimeInfo.tm_hour = 10;
        diveTimeInfo.tm_min = 2;
        diveTimeInfo.tm_sec = 37;
        diveTimeInfo.tm_isdst = 0;
    diveEntry->set_time_of_dive(mktime(&diveTimeInfo));
    diveEntry->set_name("Dive1");
    diveEntry->set_total_dive_time(47);

    diveLog->addDiveEntry(*diveEntry);


    return 0;
}
