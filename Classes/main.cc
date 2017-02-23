#include <iostream>
using namespace std;
#include <string>

#include "Date.h" 

int main()
{

	Date d1;
	d1.printLong();

	Date d2(20,1,2017);
	d2.printLong();
	
	//This is demonstrating the example of a default year. 
	Date d3(20, 1);	
	d3.printLong();

	Date d4(20);
	d4.printLong();

	Date dArray[3];		//Note how this is implicitly calling the default constructor.


       

	return 0;
}
