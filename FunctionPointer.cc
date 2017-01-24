#include <iostream>
#include <cstdlib>
using namespace std;

bool doubleIt(int&);
bool halveIt(int&);


int main()
{
	int num = 0; 
	int choice; 
	bool inputOk = false;

	cout<<endl<<"Enter 1 to double, or 2 to halve: ";
	cin>>choice;

