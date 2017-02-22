#include <iostream>
using namespace std;

int x = 10;

int main()
{
	int x = 20;

	if (true) {
		x = 30;
		cout << "in if: " << x << endl << endl;
	}	

	{
		int x = 40;
		cout << "in floating block, local: " << x << endl;
		cout << "in floating block, global: " << ::x << endl << endl;
	}


	::x = 60;
	cout << "in main, local: " << x << endl;	//Note that the main x was modified to 30 on line 11 
	cout << "in main, global: " << ::x << endl << endl;


	return 0;
}
