#include <iostream>
using namespace std;
#include <stdlib>
#include "Thing.h" 

void func();

static Thing t1(1, "static global");
Thing t2(2, "global");

int main()
{
	cout << endl << "In main..." << endl;
	
	Thing t3(3, "first local in main");
	static Thing t4(4, "static in main");

	cout << "Calling func()" << endl;
	funct();
	cout << "Back from func()" << endl;

	cout<<"Calling func() again" << endl;


