#include <iostream> 
using namespace std;

#include "Book.h"
#include "Movie.h"

void func(Movie);

int main()
{
	Book b1(1, "Ender's Game", "Orson Scott Card");
	Book b2(2, "Dune", "Frank Herbert");
	Book b3(3, "Foundation", "Isaac asimov");
	Book b4(4, "Hitch Hiker's Guide to the Galaxy", "Douglas Asams");

	Movie m1("Sherlock Holmes", "N/A", 110);
	m1.print();

	
	return 0;
}	
