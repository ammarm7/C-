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

	bool (*someFunc)(int&);

	cout<<endl<<"Enter 1 to double, or 2 to halve: ";
	cin>>choice;

	switch(choice) {
		case 1:
			someFunc = doubleIt;
		break;

		case 2:
			someFunc = halveIt;
		break;

		default:
			cout<<"-- invalid choice"<<endl;
			exit(1);
	}

	while (!inputOk) {
		cout << "Please enter a number between 0 and 100: ";
		cin >> num;
		inputOk = someFunc(num);
	}

	cout<<"Result:	" <<num<<endl;
	
	return 0;
}


bool doubleIt(int& n)
{
	if (n < 0 || n > 100)
		return false;
	n *= 2;
	return true;
}

bool halveIt(int& n)
{
	if (n < 0 || n > 100)
		return false;
	n/= 2;
	return true;
}


	
