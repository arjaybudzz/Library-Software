#ifndef DAY_H
#define DAY_H

#include <iostream>

class Day {
    public:
        Day();
        explicit Day(int);
        int get_day() const;
    private:
        int day;
};

std::istream& operator>>(std::istream&, Day&);
std::ostream& operator<<(std::ostream&, const Day&);

bool operator<(const Day&, const Day&);
bool operator>(const Day&, const Day&);
bool operator==(const Day&, const Day&);
bool operator!=(const Day&, const Day&);


#endif