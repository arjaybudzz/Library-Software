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

// I/O operations

std::istream& operator>>(std::istream& input, Month& month) {
    int m_val;

    input >> m_val;
    if (input.fail()) {
        input.clear();
        return input;
    }

    month = Month{m_val};
    return input;
}

std::ostream& operator<<(std::ostream& output, const Month& month) {
    output << month.get_month();
    return output;
}

bool operator<(const Month& left, const Month& right) {
    return left.get_month() < right.get_month();
}

bool operator>(const Month& left, const Month& right) {
    return !(left < right);
}

bool operator==(const Month& left, const Month& right) {
    return left.get_month() == right.get_month();
}

bool operator!=(const Month& left, const Month& right) {
    return !(left == right);
}