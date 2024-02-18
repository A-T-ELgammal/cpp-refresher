#ifndef DATETIME_H
#define DATETIME_H
#include "Time.h"
#include "Date.h"

class DateTime : public Time, public Date
{
public:
    DateTime(int year, int month, int day, int hour, int minute, int second)
        : Date{year, month, day}, Time{hour, minute, second} {};
};
#endif
