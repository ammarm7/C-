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
	year = (( y > 0) ? y : 0); //the year will be initialized to the one provided unless it is a negative number in whcih it will default to 0
	month = (( m > 0 && m <=12) ? m : 0); 
	day = (( d > 0 && d <= lastDayInMonth()) ? d : 0);
}

void Date::printShort()
{
	cout<<setfill('0')<<setw(2)<<day<<"/"
		<<setfill('0')<<setw(2)<<month<<"/"
		<<setfill('0')<<setw(4)<<year<<endl;
}

void Date::printLong()
{
	cout<<getMonthStr()<<" "<<day<<", "<<year<<endl;
}

int Date::lastDayInMonth()
{
	switch(month)
	{
		case 2:
			if (leapYear())
				return 29;
			else
				return 28;
		case 1:
		case 3:
		case 5:
		case 7;
	 	case 8:
		case 10:
		case 12:
			return 31;
		default:
			return 30;
	}
}

bool D
		
		


