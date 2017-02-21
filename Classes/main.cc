#include <iostream>
using namespace std;
#include <string>

#include "Date.h" 

int main()
{
	Date d1(18,1,2017);

	d1.printShort();
	d1.printLong();

	cout << endl;
	Date d2;
	d2.printLong();
	cout << endl;
	
	Date dArray[3];
	dArray[0].setDate(5,5,1955);
	dArray[0].printLong();





	return 0;
}
