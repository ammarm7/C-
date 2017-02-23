#include <iostream>
using namespace std;
#include <string>	//Remember you need to import the string lib if you are going to be using strings. 


void sayHello(string = "Timmy Tortoise");


int main()
{	
	sayHello("world");	//Specifying a paramater 
	sayHello();	//Not specifying a paramater 

	sayHello(" ");	//Sending an empty string. 

	

	return 0;
}

void sayHello(string who)
{
	cout << "Hello " << who << endl;
}



