#ifndef LAST_NAME_H
#define LAST_NAME_H

#include <iostream>

class Last_Name {
    public:
        Last_Name();
        explicit Last_Name(const std::string&);

        void set_last_name(const std::string&);
        std::string get_last_name() const;
    private:
        std::string name;
};

std::istream& operator>>(std::istream&, Last_Name&);
std::ostream& operator<<(std::ostream&, const Last_Name&);

bool operator<(const Last_Name&, const Last_Name&);
bool operator>(const Last_Name&, const Last_Name&);
bool operator==(const Last_Name&, const Last_Name&);
bool operator!=(const Last_Name&, const Last_Name&);

#endif