#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "date.h"
#include "name.h"

class Book {
    public:
        Book();
        Book(const std::string&, const Name&, const Date&);

        void set_title(const std::string&);
        void set_author(const Name&);
        void set_published(const Date&);

        std::string get_title() const;
        Name get_author() const;
        Date get_date_published() const;

    private:
        std::string title;
        Name author;
        Date published;
};

std::istream& operator>>(std::istream&, Book&);
std::ostream& operator<<(std::ostream&, const Book&);

#endif