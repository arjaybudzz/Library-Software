#ifndef MONTH_H
#define MONTH_H

#include <iostream>

class Month {
    public:
        Month();
        explicit Month(int);
        std::string get_month() const;
    private:
        int month;
};

std::istream& operator>>(std::istream&, Month&);
std::ostream& operator<<(std::ostream&, const Month&);

bool operator<(const Month&, const Month&);
bool operator>(const Month&, const Month&);
bool operator==(const Month&, const Month&);
bool operator!=(const Month&, const Month&);

#endif