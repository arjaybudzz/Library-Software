#include "../header/year.h"
#include <stdexcept>

static const int MIN_YEAR = 1900;
static const int MAX_YEAR = 2100;

Year::Year():
    year{MIN_YEAR} {}

Year::Year(int y):
    year{y} {
        if (y < MIN_YEAR || y > MAX_YEAR) throw std::out_of_range("Year is invalid.");
    }

int Year::get_year() const { return year; }

// I/O operations

std::istream& operator>>(std::istream& input, Year& year) {
    int y_val;

    input >> y_val;
    if (input.fail()) {
        input.clear();
        return input;
    }

    year = Year{y_val};
    return input;
}

std::ostream& operator<<(std::ostream& output, const Year& year) {
    output << year.get_year();
    return output;
}

// bool operations

bool operator<(const Year& left, const Year& right) {
    return left.get_year() < right.get_year();
}

bool operator>(const Year& left, const Year& right) {
    return !(left < right);
}

bool operator==(const Year& left, const Year& right) {
    return left.get_year() == right.get_year();
}

bool operator!=(const Year& left, const Year& right) {
    return !(left == right);
}