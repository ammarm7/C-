//Friend fn is a special type of function. It has the friend keyword infront of it. 
//Every class can have friends and a friend of the class is something which is completely seperate from the class but has access to the stuff inside the class like variables and funcitons...

#include <iostream>
using namespace std;


class StankFist{
	public: 
		StankFist(){stinkyVar=0;}	//This constructor will initialize the stinkyVar to 0
	private:
		int stinkyVar;

	friend void stinkyFriend(StankFist &sfo);	//Prototypeing a stinkyFriend fn with the keyword friend. 
};

void stinkyFriend(StankFist &sfo)
{
	sfo.stinkyVar=90;
	cout << sfo.stinkyVar << endl;
}

int main(){
	StankFist bob;
	stinkyFriend(bob);

	return 0;
}
