#include <iostream>
using namespace std;
#include <string>

#inlcude "Books.h"

void func1(Book);
void func2(Book&);
void func3(Book*);

int main()
{
	cout << endl << "Declaring and initializing books 1 to 4..." << endl;	

	Book b1(1, "Ender's Game", "orson Scott Card");
	Book b2(2, "Dune", "Frank Herbert");
	Book b3(3, "Foundation", "Isaac Asimov");
	Book b4(4, "Hitch Hiker's Guide to the Galaxy", "Doublas Adams");

	b1.print();
	b2.print();
	b3.print();
	b4.print();

	return 0;
}
