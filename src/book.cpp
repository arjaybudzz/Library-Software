#include "../header/book.h"
#include <iostream>

Book::Book():
    title{}, author{}, published{} {}

Book::Book(const std::string& t_val, const Name& n_val, const Date& d_val):
    title{t_val}, author{n_val}, published{d_val} {}

Book::~Book() {}

void Book::set_title(const std::string& t_val) {
    title = t_val;
}

void Book::set_author(const Name& n_val) {
    author = n_val;
}

void Book::set_published(const Date& d_val) {
    published = d_val;
}

std::string Book::get_title() const { return title; }
Name Book::get_author() const { return author; }
Date Book::get_date_published() const { return published; }

std::istream& operator>>(std::istream& input, Book& book) {
    std::string t_val;
    Name n_val;
    Date d_val;

    std::cout << "Enter book title: ";
    std::getline(input, t_val);
    std::cout << "Enter author's name below:" << '\n';
    std::cin >> n_val;
    std::cout << "Enter date of publication(mm/dd/yyyy): ";
    std::cin >> d_val;

    book = Book{t_val, n_val, d_val};
    return input;
}

std::ostream& operator<<(std::ostream& output, const Book& book) {
    output << "Title:" << '\t' << book.get_title() << '\n'
            << "Author:" << '\t' << book.get_author() << '\n'
            << "Date published:" << '\t' << book.get_date_published();
    
    return output;
}

bool operator==(const Book& left, const Book& right) {
    if (left.get_title() == right.get_title() && left.get_author() == right.get_author() && left.get_date_published() == right.get_date_published()) return true;

    return false;
}

bool operator!=(const Book& left, const Book& right) {
    return !(left == right);
}