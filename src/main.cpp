#include <iostream>
#include <iomanip>
#include "../header/day.h"
#include "../header/month.h"
#include "../header/date.h"
#include "../header/year.h"

int main() 
try{
    Date date;
    Date date2;

    std::cout << "Enter a date: " << std::endl;
    std::cin >> date;
    std::cout << "Enter another date: " << std::endl;
    std::cin >> date2;
    
    std::cout << std::boolalpha << (date == date2) << std::endl;

    return 0;
}
catch(std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
    return 1;
}
catch(std::invalid_argument& e) {
    std::cerr << e.what() << std::endl;
    return 2;
}