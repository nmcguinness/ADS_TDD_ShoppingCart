#pragma once
#include <list>
#include "Book.h"
using std::list;
class ShoppingCart
{
	list<Book*> books;

public:
	ShoppingCart();
	~ShoppingCart();
	bool addBook(Book* b);
	int addAllBooks(list<Book*> bks);
	Book* getBookByTitle(string title);
	bool remove(Book* b);
	double getSubtotal();
	bool checkout();
	bool isEmpty();
	int size();
};

