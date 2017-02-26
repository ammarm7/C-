//Book.cc
#include <iostream>
using namespace std;
#include <string>
#include "Books.h"

Book::Book(int i, string t, string a)
{
	cout << "-- deafault ctor: " << i << endl;
	id = i;
	title = t;
	author = a;
}

Book::~book()	//Remember that this is a destructor because of the ~ sign. 
{
	cout<<"-- dtor: " << id << endl;
}

void Book::print() const
{
	cout << "** " << title << " by " << author << endl;
}



