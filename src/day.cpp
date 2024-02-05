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