#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void setDate(int d, int m, int y)
{ 
	year = ( ( y > 0) ? y : 0 );
	month = ( ( m > 0 && m < = 12 ) ? m : 0 ) ;
	day = ( ( d > 0 && d < = lastDayInMonth() ) ? d : 0);


