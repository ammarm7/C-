//If you use Static keyword before a method it CANNOT be used outside of this file. 


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void foo();
void staticFoo();

int main()
{
		
	foo();
	foo();
	foo();

	staticFoo();
	staticFoo();
	staticFoo();

	return 0;
}


void foo()
{
	int i = 10;
	cout << i << endl;	//NOTE: It always prints 10 becuase every subsequent time the fn is called i is reinitialized t0 10
	i += 2;
}


void staticFoo()
{ 
	static int i = 10;	//The last value from 2 lines down is retained and does not get overwritten!! 
	cout << i << endl;
	i += 2;
}


