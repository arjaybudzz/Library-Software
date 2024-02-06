#ifndef NAME_H
#define NAME_H

#include <iostream>
#include "first_name.h"
#include "last_name.h"

class Name {
    public:
        Name();
        Name(const First_Name&, const Last_Name&);

        First_Name get_f_name() const;
        Last_Name get_l_name() const;
    private:
        First_Name first_name;
        Last_Name last_Name;
};

std::istream& operator>>(std::istream&, Name&);
std::ostream& operator<<(std::ostream&, const Name&);
bool operator<(const Name&, const Name&);
bool operator>(const Name&, const Name&);
bool operator==(const Name&, const Name&);
bool operator!=(const Name&, const Name&);

#endif