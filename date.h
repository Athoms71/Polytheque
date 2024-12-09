class Date
{
public:
    Date() : _month(1), _day(1), _year(1900) {};
    Date(int month, int day, int year);
    int getMonth() { return _month; };
    int getDay() { return _day; };
    int getYear() { return _year; };

private:
    int _month;
    int _day;
    int _year;
    bool isDate(int month, int day, int year);
};