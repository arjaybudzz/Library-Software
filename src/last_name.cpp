#include "../header/last_name.h"
#include <iostream>

Last_Name::Last_Name():
    name{} {}

Last_Name::Last_Name(const std::string& n_val):
    name{n_val} {}

void Last_Name::set_last_name(const std::string& n_val) {
    if (n_val.empty()) throw std::invalid_argument("Last name must not be empty!");
    name = n_val;
}

std::string Last_Name::get_last_name() const { return name; }

std::istream& operator>>(std::istream& input, Last_Name& last_name) {
    std::string n_val;

    input >> n_val;
    if (n_val.empty()) throw std::invalid_argument("Last name must not be empty!");
    if (input.fail()) {
        input.clear();
        return input;
    }

    last_name.set_last_name(n_val);
    return input;
}