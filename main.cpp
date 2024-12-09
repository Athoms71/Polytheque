#include "date.h"
#include <iostream>

int main() {
    Date d1(1,5,2016);
    std::cout << "d1: " << d1.getMonth() << "/" << d1.getDay() << "/" << d1.getYear() << std::endl;
    return 0;
}