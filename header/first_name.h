#ifndef FIRST_NAME_H
#define FIRST_NAME_H

#include <iostream>

class First_Name {
    public:
        First_Name();
        explicit First_Name(const std::string&);

        void set_name(const std::string&);
        std::string get_first_name() const;
    private:
        std::string name;
};

std::istream& operator>>(std::istream&, First_Name&);
std::ostream& operator<<(std::ostream&, const First_Name&);

bool operator<(const First_Name&, const First_Name&);
bool operator>(const First_Name&, const First_Name&);
bool operator==(const First_Name&, const First_Name&);
bool operator!=(const First_Name&, const First_Name&);

#endif