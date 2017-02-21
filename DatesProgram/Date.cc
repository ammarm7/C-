//Date.cc

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Date.h"


Date::Date()
{
	cout << "-- default constructor" << endl;
	setDate(0,0,0);
}

Date::Date(int d, int m, int y)
{
	setDate(d, m, y);
}

void Date::setDate(int d, int m, int y)
{
	year = (( y > 0) ? y : 0); //if provided year is 

