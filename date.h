
class Date {
public:
    Date(int month, int day, int year);
    int getMonth() {return _month;};
    int getDay() {return _day;};
    int getYear() {return _year;};
private:
    int _month;
    int _day;
    int _year;
    bool isDate(int month, int day, int year);
};