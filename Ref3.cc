#include <iostream>
using namespace std; 

bool doublePerc(int); 	// Pass by value 
bool doublePerc(int*); 	// Pass by reference by pointer 
bool doublePerc(int&); 	// Pass by reference by reference


int main()
{ 
	int n1, n2;	
	int *p1, *p2;

	n1 = 7;
	n2 = 99; 

	p1 = &n1;
	p2 = p1; 
	p1 = &n2;

	cout << "Pointees: " << *p1 << " and " << *p2 << endl;
	cout << "Pointers: " << p1 << " and " << p2 << endl; 

	int& r2 = n2; //n2 is now bound to r2

	cout << "n1 = " << n1 << "; n2 = " << n2 << "; r2 = " << r2 << endl; 

	r2 = 10;
	cout << "n1 = " << n1 << "; n2 = " << n2 << "; r2 = " << r2 << endl; 

	// Printing out address of n1, n2, and r2 
	cout << "Addresses: n1 = " << &n1 << "; &n2 = " << &n2 << "; &r2 = " << &r2 << endl; 	
	cout << "So here we can note that because we are binding the value of r2 to n2 - eve the addresses are the same!" << endl;


	return 0;

}

bool doublePerc(int n)
{ 
	if (n < 0 || n > 100) 
		return false; 

	n *= 2;
	return true; 
} 

bool doublePerc(int* n) 
{ 
	if (*n < 0 || *n > 100)
		return false; 

	*n *= 2; 
	return true; 
}

bool doublePerc(int& n) 
{
	if (n < 0 || n > 100) 
		return false; 

	n *= 2; 
	return true; 	
}


