// ADS_TDD_ShoppingCart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include <list>

void demoOperatorAndCopy();
void demoEmplace();
void demoReferenceAndPointerInDataStructure();
void demoEfficiencyOfPointersAndDataStructures();
void exerciseEmplace();

int main()
{
    //demoOperatorAndCopy();
   // demoEfficiencyOfPointersAndDataStructures();
    //demoReferenceAndPointerInDataStructure();
    //demoEmplace();

    exerciseEmplace();
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

void addTo(list<Book> list, Book b) {
    list.push_back(b);
}


void demoEfficiencyOfPointersAndDataStructures()
{
    Book a("AAAA", 100);
    Book b("BBBB", 68);
    Book c("CCCC", 240);

    list<Book*> bookList;
    bookList.push_back(&a);
    bookList.push_back(&b);
    bookList.push_back(&c);
}

void demoEmplace()
{
    list<Book> bookList;

    //outside of the list we are creating a temp object (Book) then we are copying into the list
  //  bookList.push_back(Book("DDDD", 125));
  //  bookList.push_back(Book("EEEE", 125));
   // bookList.push_back(Book("FFFF", 125));

    bookList.emplace_back("GGGG", 250);
    bookList.emplace_back("HHHH", 550);
    bookList.emplace_back("IIII", 850);

    //copying out object into temp b, printing, and then at } destroying that temp object
   /* for (Book b : bookList) {
        cout << b << endl;
    }*/

    bookList.emplace(bookList.begin(), "JJJJ", 750);

    for (Book b : bookList) {
        cout << b << endl;
    }
}

void exerciseEmplace() {
    //vector of strings
    //start with "a", "d", "g", "s"
    //print contents

    //add "f" at the correct position using emplace()
    //print contents
    
    //add "b" at the correct position using emplace()
    //print contents

    //add "z" at the correct position using emplace()
    //print contents
}









void demoReferenceAndPointerInDataStructure()
{
}
