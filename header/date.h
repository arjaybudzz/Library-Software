#ifndef DATE_H
#define DATE_H

#include <iostream>
#include "month.h"
#include "day.h"
#include "year.h"

class Month;
class Day;
class Year;

class Date {
    public:
        Date();
        Date(const Month&, const Day&, const Year&);

        // setters and getters

        void set_month(const Month&);
        void set_day(const Day&);
        void set_year(const Year&);

        Month get_month() const;
        Day get_day() const;
        Year get_year() const;

    private:
        Month month;
        Day day;
        Year year;
};

std::istream& operator>>(std::istream&, Date&);
std::ostream& operator<<(std::ostream&, const Date&);

bool operator<(const Date&, const Date&);
bool operator>(const Date&, const Date&);
bool operator==(const Date&, const Date&);
bool operator!=(const Date&, const Date&);

#endif