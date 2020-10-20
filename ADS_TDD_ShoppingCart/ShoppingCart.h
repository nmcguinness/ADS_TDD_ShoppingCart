#pragma once
#include <list>
#include "Book.h"
using std::list;
class ShoppingCart
{
	list<Book*> books;

public:
	ShoppingCart() {};

	~ShoppingCart() {};

	bool addBook(Book* b) {

		if (b == nullptr)
			throw std::logic_error("Cannot add pointer to null!");

		books.emplace_back(b);
	};

	int addAllBooks(list<Book*> bks) {
		
		//throw on nullptr for bks
		if (bks.size() == 0)
			return 0;

		for (Book* b : bks)
		{
			addBook(b);
		}
		return bks.size();
	};

	Book* getBookByTitle(string title) {
		for (Book* b : books) {
			if (b->getTitle() == title)
				return b;
		}
		return nullptr;
	};

	//an improved version of the search function
	Book* findBy() {

	}
	
	bool remove(Book* b) {
		//auto it = books.begin();
		//list<Book*>::iterator it = books.begin();
		//list<Book*>::const_iterator it = books.begin();

		//iterator is address of the first element in the list
		for (auto it = books.begin(); it != books.end(); it++) {
			if (*it == b) { //does the element pointed to by the iterator store the address of b

				//remove the element in the list and move the iterator back one element
				it = books.erase(it);
				return true;
			}
		}
		return false;
	};
	

	double getSubtotal() {
		double sum = 0;
		for (Book* b : books) {
			sum += b->getPrice();
		}
		return sum;
	};
	
	bool checkout() {
		if (books.size() == 0)
			throw std::logic_error("Books list is empty!");

		books.clear();
		return true;
	};
	
	bool isEmpty() {
		return size() == 0;
	};
	
	int size() {
		return books.size();
	};
};

