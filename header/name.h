#ifndef NAME_H
#define NAME_H

#include <iostream>

class Name {
    public:
        Name();
        Name(const std::string&, const std::string&, const std::string&);

    private:
        std::string first_name;
        std::string middle_name;
        std::string last_name;
};

std::istream& operator>>(std::istream&, Name&);
std::ostream& operator<<(std::ostream&, const Name&);



#endif