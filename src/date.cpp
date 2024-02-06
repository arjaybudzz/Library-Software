#include "../header/date.h"
#include <iostream>

Date::Date():
    month{}, day{}, year{} {}

Date::Date(const Month& m_val, const Day& d_val, const Year& y_val):
    month{m_val}, day{d_val}, year{y_val} {}

// setter functions

void Date::set_month(const Month& m_val) {
    month = m_val;
}

void Date::set_day(const Day& d_val) {
    day = d_val;
}

void Date::set_year(const Year& y_val) {
    year = y_val;
}

// getter functions

Month Date::get_month() const { return month; }
Day Date::get_day() const { return day; }
Year Date::get_year() const { return year; }

// I/O operations

std::istream& operator>>(std::istream& input, Date& date) {
    
}




