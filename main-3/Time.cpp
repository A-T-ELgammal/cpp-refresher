#include "Time.h"

Time::Time(int hour, int minute, int second) : hour{hour}, minute{minute}, second{second} {}

int Time::getHour()
{
    // if (hour > 0 && hour <= 24)
    return hour;
}

int Time::getMinute()
{
    // if (minute > 0 && minute <= 60)
    return minute;
}
int Time::getSecond()

{
    // if (second > 0 && second <= 60)
    return second;
}
