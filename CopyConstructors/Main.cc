#include <iostream>
using namespace std;
#include <string>

#include "Book.h"

void func1(Book);
void func2(Book&);
void func3(Book*);

int main()
{
	cout << endl<<"Declaring and initializing books 1 to 4..." << endl;

	Book b1(1, "Ender's Game", "Orson Scott Card");
	Book b2(2, "Dune", "Frank Herbert");
	Book b3(3, "Foundation", "Isaac Asimov");
	Book b4(4, "Hitch Hiker's Guide to the Galaxy", "Douglas Adams");
	
	b1.print();
	b2.print();
	b3.print();
	b4.print();

	cout << endl << endl;

	Book b5;
	b5 = b4;
	b5.print();	//This method calls the default ctor

	Book b6 = b5;	//This method really calls the copy ctor
	b6.print();

	cout << "Line 34" << endl;
	func1(b1);	//Pass by value, this is actually calling the copy ctor
	func2(b2);	//This takes a book by ref but does not call the cc

	func3(&b3);	//Same as above

	cout << "Line 40" << endl;

	string hello = "Hello";

	func1(hello);

	return 0;
}

void func1(Book b)
{
	b.print();
}

void func2(Book& b)	
{
	b.print();
}

void func3(Book* b)
{
	b->print();
}


