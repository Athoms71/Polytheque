
class Date {
public:
    Date(int month, int day, int year);
    int getMonth();
    int getDay();
    int getYear();
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
private:
    int _month;
    int _day;
    int _year;
    bool isDate(int month, int day, int year);
};