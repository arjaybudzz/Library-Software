#ifndef YEAR_H
#define YEAR_H

class Year {
    public:
        Year();
        explicit Year(int);

        int get_year() const;
    private:
        int year;
};

#endif