#include <iostream>
using namespace std;
#include <string>
#include "Student.h"

int main()
{
	Student matilda("100111222", "Matilda");
	Student harold("100222333", "Harold");
	Student joe("100222333", "Joe");
	Student timmy("100222333", "Timmy");
	Student amy("100222333", "Amy");

	List comp2404;

	comp2404.add(&harold);
	comp2404.add(&matilda);



	return 0;
}
