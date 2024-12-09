#include "date.h"
#include <iostream>

int Date::getMonth()
{
    return _month;
}
int Date::getDay()
{
    return _day;
}
int Date::getYear()
{
    return _year;
}

void Date::setMonth(int month)
{
    _month = month;
}

void Date::setDay(int day)
{
    _day = day;
}

void Date::setYear(int year)
{
    _year = year;
}

bool Date::isDate(int month, int day, int year)
{
    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1900)
    {
        return false;
    }
    return true;
}

Date::Date(int month, int day, int year)
{
    if (isDate(month, day, year))
    {
        _month = month;
        _day = day;
        _year = year;
    }
    else
    {
        std::cout << "Date non valide.\n";
    }
}
