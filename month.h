#ifndef MONTH_H
#define MONTH_H

class Month {
    public:
        Month();
        explicit Month(int m);
        void set_month(int);
        int get_month() const;
    private:
        int month;
};