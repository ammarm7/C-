#include <iostream>
using namespace std;
#include <string>
#include "Movie.h"

Movie::Movie(string t, string s, int d)
{
	title 		= t;
	screenwriter 	= s;
	duration 	= d;
	cout << "-- default Movie ctor: " << title << endl;
}

Movie::~Movie()
{
	cout<<"-- Movie dtor: " << title << endl;
}

void Movie::print()
{
	cout << "** Movie " << title << " lasting " << duration << " minutes" << endl;
}

