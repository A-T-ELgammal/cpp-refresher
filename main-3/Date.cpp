#include "Date.h"
Date::Date(int year, int month, int day) : year{year}, month{month}, day{day} {}
int Date::getYear()
{
    // if (year > 0)
    return year;
}

int Date::getMonth()
{
    if (month < 0)
        return -1;

    return month;
}

int Date::getDay()
{
    // if (day > 0)
    return day;
}
