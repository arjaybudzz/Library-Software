#include "year.h"
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
