#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int *p1, *p2;

	n1 = 7;
	n2 = 99;

	p1 = &n1;
	p2 = p1;
	p1 = &n2;

	cout << "Pointees: " << *p1 << " and " <<*p2 << endl;
	cout << "Pointers: " << p1 << " and " << p2 << endl; 


	return 0;
}
