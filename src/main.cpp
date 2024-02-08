#include <iostream>
#include <iomanip>
#include "../header/book.h"
#include "../header/library.h"
#include "../header/name.h"
#include "../header/date.h"
#include <vector>

int main() 
try{

    Library library;
    Book book("James", Name(First_Name{"James"}, Last_Name{"Ryan"}), Date(Month{1}, Day{12}, Year{2000}));
    Book book2("Viviene", Name(First_Name{"James"}, Last_Name{"Ryan"}), Date(Month{2}, Day{12}, Year{1978}));

    library.add_book(book);
    library.add_book(book2);

    // library.view_available_books();

    std::cout << library.back() << std::endl;
    
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