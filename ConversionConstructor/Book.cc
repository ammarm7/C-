#include <iostream>
using namespace std;
#include <string>
#include "Book.h"

Book::Book(int i, string t, string a)
{
	cout << "-- default ctor: " << i << endl;
	id 	= i;
	title 	= t;
	author 	= a;
}

Book::Book(const Book& src)	//We can access these members even if they are private because we are referring to th eobject by a class of it's same type (Book == Book)
{

	cout << "-- copy ctor: " << endl;
	id 	= src.id;
	title 	= src.title;
	author 	= src.author;
}

Book::Book(const string& str)
{
	cout << "-- Conversion ctor: " << endl;
	id 	= -7000;
	title 	= str;
	author 	= "N/A";
}



Book::~Book()
{
	cout << "-- dtor: " << id << endl;
}

void Book::print() const
{
	cout << "** " << title << " by " << author<<endl;
}
