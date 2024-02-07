#include "../header/first_name.h"
#include <iostream>

First_Name::First_Name():
    name{} {}

First_Name::First_Name(const std::string& n_val):
    name{n_val} {
        if (n_val.empty()) throw std::invalid_argument("First name must not be empty!");
    }

void First_Name::set_first_name(const std::string& n_val) {
    if (n_val.empty()) throw std::invalid_argument("First name must not be empty!");
    name = n_val;
}

std::string First_Name::get_first_name() const { return name; }

std::istream& operator>>(std::istream& input, First_Name& first_name) {
    std::string n_val;

    std::getline(input, n_val);
    if (input.fail()) {
        input.clear();
        return input;
    }

    first_name.set_first_name(n_val);
    return input;
}

std::ostream& operator<<(std::ostream& output, const First_Name& first_name) {
    output << first_name.get_first_name();
    return output;
}

bool operator<(const First_Name& left, const First_Name& right) {
    return left.get_first_name() < right.get_first_name();
}

bool operator>(const First_Name& left, const First_Name& right) {
    return !(left < right);
}

bool operator==(const First_Name& left, const First_Name& right) {
    return left.get_first_name() == right.get_first_name();
}

bool operator!=(const First_Name& left, const First_Name& right) {
    return !(left == right);
}