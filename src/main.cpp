#include <iostream>
#include <iomanip>
#include "../header/book.h"
#include <vector>

int main() 
try{
    Book book;
    int book_count = 0;
    std::vector<Book> books;

    while(book_count <= 5) {
        std::cin >> book;
        books.push_back(book);
        ++book_count;
        std::cin.ignore();
    }

    for (const auto& b : books) {
        std::cout << b << '\n';
    }

    return 0;
}
catch(std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
    return 1;
}
catch(std::invalid_argument& e) {
    std::cerr << e.what() << std::endl;
    return 2;
}