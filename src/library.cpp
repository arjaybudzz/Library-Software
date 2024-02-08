#include "../header/library.h"
#include <iostream>
#include <stdexcept>
#include <algorithm>

void Library::add_book(const Book& book) {
    books.push_back(book);
}

Book Library::borrow_book(const Book& book) {
    auto verify = std::find(books.begin(), books.end(), book);
    
    if (verify == books.end()) throw std::invalid_argument("The book is not available.");

    verify = books.erase(verify);
    return *verify;
}

bool Library::verify_book(const Book& book) {
    auto verify = std::find(books.begin(), books.end(), book);
    if (verify == books.end()) return false;
    return true;
}

void Library::view_available_books() const {
    for (const auto& book : books) {
        std::cout << book << "\n\n";
    }
}

Book Library::front() const {
    if (books.begin() == books.end()) throw std::out_of_range("The library is empty."); 
    return *books.begin(); 
}

Book Library::back() const { 
    if (books.begin() == books.end()) throw std::out_of_range("The library is empty.");
    return *(books.end() - 1); 
}