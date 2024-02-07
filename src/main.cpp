#include <iostream>
#include <iomanip>
#include "../header/day.h"
#include "../header/month.h"
#include "../header/date.h"
#include "../header/year.h"
#include "../header/book.h"
#include "../header/first_name.h"
#include "../header/last_name.h"

int main() 
try{
    Book book;
    First_Name f_name;
    Last_Name l_name;

    std::cin >> book;

    std::cout << book << std::endl;

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