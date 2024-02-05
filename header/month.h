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

#endif