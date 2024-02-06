#include <iostream>
#include "../header/day.h"
#include "../header/month.h"

int main() 
try{
    Day day(18);
    Day day2{13};

    if (day > day2) {
        std::cout << "First is greater than the second" << std::endl;
    }
    else {
        std::cout << "Second is greater than the first" << std::endl;
    }

    return 0;
}
catch(std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
    return 1;
}