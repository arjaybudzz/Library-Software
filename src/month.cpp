#include "../header/month.h"
#include <iostream>
#include <array>

static const int MIN_MONTH = 1;
static const int MAX_MONTH = 12;
static const std::array<std::string, 13> months = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

Month::Month():
    month{MIN_MONTH} {}

Month::Month(int m):
    month{m} {
        if (m < MIN_MONTH || m > MAX_MONTH) throw std::out_of_range("Month is invalid.");
    }

std::string Month::get_month() const {
    return months[month];
}