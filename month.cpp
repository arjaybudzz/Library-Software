#include "month.h"
#include <iostream>

constexpr int MIN_MONTH = 1;
constexpr int MAX_MONTH = 12;

Month::Month():
    month{MIN_MONTH} {}

Month::Month(int m):
    month{m} {
        if (m < MIN_MONTH || m > MAX_MONTH) throw std::out_of_range("Month is invalid.");
    }

void Month::set_month(int m) {
    if (m < MIN_MONTH || m > MAX_MONTH) throw std::out_of_range("Month is invalid.");
}

int Month::get_month() const {

}