#include "../header/date.h"
#include <iostream>
#include <iomanip>

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
    Month month;
    Day day;
    Year year;

    input.width(4);

    input >> month >> day >> year;
    if (input.fail()) {
        input.clear();
        return input;
    }

    date = Date{month, day, year};
    return input;
}

std::ostream& operator<<(std::ostream& output, const Date& date) {
    output << date.get_month() << ' ' << date.get_day() << ", " << date.get_year();
    return output;
}

// bool operations

bool operator<(const Date& left, const Date& right) {
    // compare year

    if (left.get_year() < right.get_year()) return true;

    if (left.get_year() == right.get_year()) {
        if (left.get_day() < right.get_day() && (left.get_month() == right.get_month())) {
            return true;
        }

        else {
            if (left.get_month() < right.get_month()) {
                return true;
            }
            return false;
        }
    }

    return false;
}

bool operator>(const Date& left, const Date& right) {
    return !(left < right);
}

bool operator==(const Date& left, const Date& right) {
    if (left.get_month() == right.get_month() && left.get_day() == right.get_day() && left.get_year() == right.get_year()) {
        return true;
    }

    return false;
}

bool operator!=(const Date& left, const Date& right) {
    return !(left == right);
}