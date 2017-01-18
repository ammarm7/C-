#include <iostream>
using namespace std;

// bool doublePerc(int);	// Pass by value 
bool doublePerc(int*);	// Pass by reference by pointer
bool doublePerc(int&);	// Pass by reference by reference


int main()
{
	int num;
	bool inputOk = false;

	while (!inputOk) {
		cout << "Please enter a number betweeen 0 and 100; ";
		cin >> num;
		inputOk = doublePerc(num);
	}

	cout << "The result is " << num << endl;

	return 0;
} 

bool doublePerc(int n)
{
	if (n < 0 || n > 100) 
		return false;

	n = 2;
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





