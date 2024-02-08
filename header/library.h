#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <iostream>
#include "book.h"

class Library {
    public:
        void add_book(const Book&);
        Book borrow_book(const Book&);
        bool verify_book(const Book&);
        void view_available_books() const;
        Book front() const;
        Book back() const;
    private:
        std::vector<Book> books;
};

#endif