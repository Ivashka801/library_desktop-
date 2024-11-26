#include "Book.h"

int Book::count = 0;

Book::Book(const std::string& title, const std::string& author, const std::string& info, bool isAvailable)
	: title(title), author(author), info(info), isAvailable(isAvailable), id(++count) {}

