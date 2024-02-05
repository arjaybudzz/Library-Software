#ifndef DAY_H
#define DAY_H

class Day {
    public:
        Day();
        explicit Day(int);
        int get_day() const;
    private:
        int day;
};