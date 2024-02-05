#include "../header/day.h"
#include <stdexcept>

static const int MIN_DAY = 1;
static const int MAX_DAY = 31;

Day::Day():
    day{MIN_DAY} {}

Day::Day(int d):
    day{d} {
        if (d < MIN_DAY || d > MAX_DAY) throw std::out_of_range("Day is invalid.");
    }

int Day::get_day() const { return day; }

// I/O operations

std::istream& operator>>(std::istream& input, Day& day) {
    int day_val;

    input >> day_val;
    
    if (input.fail()) {
        input.clear();
        return input;
    }

    day = Day{day_val};
    return input;
}

std::ostream& operator<<(std::ostream& output, const Day& day) {
    output << day.get_day();
    return output;
}

// comparison operators

bool operator<(const Day& left, const Day& right) {
    return left.get_day() < right.get_day();
}

bool operator>(const Day& left, const Day& right) {
    return !(left < right);
}

bool operator==(const Day& left, const Day& right) {
    return left.get_day() == right.get_day();
}

bool operator!=(const Day& left, const Day& right) {
    return !(left == right);
}




