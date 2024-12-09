#include "date.h"
#include <iostream>
#include <ostream>

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
