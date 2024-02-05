#include <iostream>
#include "day.h"
#include "month.h"

int main() 
try{
    Day day(1);
    Month month;

    std::cout << day.get_day() << std::endl;
    std::cout << month.get_month(17) << std::endl;

    return 0;
}
catch(std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
    return 1;
}