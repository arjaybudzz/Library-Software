#include "../header/book.h"
#include <iostream>

Book::Book():
    title{}, author{}, published{} {}

Book::Book(const std::string& t_val, const Name& n_val, const Date& d_val):
    title{t_val}, author{n_val}, published{d_val} {}