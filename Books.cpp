#include "Books.h"

#include <algorithm>

// Helper function to convert a string to lowercase
std::string toLower(const std::string& str) {
	std::string lowerStr = str;
	std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
	return lowerStr;
}

std::vector<Book> Books::findBookByTitle(const std::string& title) const 
{
	std::vector<Book> foundBooks;
	std::string lowercaseTitle = toLower(title);

	for (auto book : books) {
		std::string lowercaseBookTitle = toLower(book->getTitle());
		if (bookTitle.find(lowerTitle) != std::string::npos) {
			foundBooks.push_back(book);
		}
	}
	return foundBooks;
}

