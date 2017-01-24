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

	cout << "Pointeees: " << *p1 << " and " << *p2 << endl;	//Deref the pointers
	cout << "Pointers: " << p1 << " and " << p2 << endl;

	// int& r1;
	// Note you cannot just declare a ref this way. 
	
	int& r2 = n2;	//Note that since r2 is now bound to n2 it cannot be changed. Binding is for life. 

	cout << "n1 = " << n1 << "; n2 = " << n2 << "; r2 = " << r2 << endl;

	





	return 0;

}

