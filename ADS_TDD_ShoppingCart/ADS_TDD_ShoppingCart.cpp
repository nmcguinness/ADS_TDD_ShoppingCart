// ADS_TDD_ShoppingCart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include <list>

void demoOperatorAndCopy();
void demoEmplace();
void demoReferenceAndPointerInDataStructure();

int main()
{
    //demoOperatorAndCopy();
    demoEmplace();
    //demoReferenceAndPointerInDataStructure();
}

void demoOperatorAndCopy(){
    Book a("AAAA", 100);
    cout << a << endl;

    //assignment operator
    Book b = a;
    cout << b << endl;

    //copy constructor
    Book c(a);
    cout << c << endl;
}

void demoEmplace()
{
    Book a("AAAA", 100);
    Book b("BBBB", 68);
    Book c("CCCC", 240);
    list<Book> bookList1 = { a , b, c };
}

void demoReferenceAndPointerInDataStructure()
{
}
