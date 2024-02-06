#ifndef YEAR_H
#define YEAR_H

#include <iostream>

class Year {
    public:
        Year();
        explicit Year(int);

        int get_year() const;
    private:
        int year;
};

std::istream& operator>>(std::istream&, Year&);
std::ostream& operator<<(std::ostream&, const Year&);

bool operator<(const Year&, const Year&);
bool operator>(const Year&, const Year&);
bool operator==(const Year&, const Year&);
bool operator!=(const Year&, const Year&);

#endif