#include "../header/name.h"
#include <iostream>
#include <string>

Name::Name():
    first_name{}, last_Name{} {}

Name::Name(const First_Name& f_name, const Last_Name& l_name):
    first_name{f_name}, last_Name{l_name} {}

First_Name Name::get_f_name() const { return first_name; }
Last_Name Name::get_l_name() const { return last_Name; }

std::istream& operator>>(std::istream& input, Name& name) {
    First_Name f_name;
    Last_Name l_name;

    std::cout << "First Name: ";
    input >> f_name;
    std::cout << "Last Name: ";
    input >> l_name;

    name = Name{f_name, l_name};
    return input;
}

std::ostream& operator<<(std::ostream& output, const Name& name) {
    output << name.get_f_name() << ' ' << name.get_l_name();
    return output;
}

bool operator<(const Name& left, const Name& right) {
    if (left.get_f_name() < left.get_f_name()) return true;

    if (left.get_f_name() == left.get_f_name()) {
        if (left.get_l_name() < left.get_l_name()) {
            return true;
        }

        return false;
    }

    return false;
}

bool operator>(const Name& left, const Name& right) {
    return !(left < right);
}

bool operator==(const Name& left, const Name& right) {
    if (left.get_f_name() == right.get_f_name() && left.get_l_name() == right.get_l_name()) return true;
    return false;
}

bool operator!=(const Name& left, const Name& right) {
    return !(left == right);
}