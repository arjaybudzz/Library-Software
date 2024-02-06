#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "date.h"
#include "name.h"

class Book {
    public:
        Book();
        Book(const std::string&, const Name&, const Date&);
    private:
        std::string title;
        Name author;
        Date published;
};

#endif