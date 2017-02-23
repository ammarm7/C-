//Thing.cc

#include <iostream>
using namespace std;
#include <string>
#include "Thing.h"

//Since the Constructor prototype is in the header file "Thing.h", elaborate by defining it and getting it to do what you want for this class. This is the nature of OOP. 

Thing::Thing(int i, string s)
{
	id = i;
	location = s;
	cout<<"-- ctor:	" << id << " " << location << endl;
}

Thing::~Thing()	//This is the destructor. We know this because it is prefixed with ~
{
	cout << "-- dtor: " << id << " " << location << endl;
}
