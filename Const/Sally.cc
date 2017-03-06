//Sally.cc

#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(){		//Calling ctor

}

void Sally::printShit(){
	cout << "I am the print shit function" << endl;
}

void Sally::printShit2() const{
	cout << "I am the constant print shit function" << endl;
}
