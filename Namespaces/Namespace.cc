#include <iostream>
using namespace std;
#include <string>

string adama = "Lorne Greene";	//Initializing a random string

namespace NewBSG	//Note: All a namespace is, is a scope which we give a name too.
{
	string starbuck = "Katee Sackhoff";
	string apollo = "Jamie Bamber";
	string adama = "Edward James Olmos";	//Another adama!

	void printCast();

	namespace Nuggets	//We can actually declare another namespace in a namespace!!
	{
		enum NuggetNames { HOTDOG=101, KAT, CHUCKLES };
	}
}

namespace
{
	string thePres = "Mary McDonnell";
}

int main()
{
	// cout<<endl<<"from unnamed space: " << thePres << endl << endl;
	cout<<"		Starbuck: "<< NewBSG::starbuck << endl;
	cout<<"		Apollo: "<< NewBSG::apollo << endl;
	cout<<"		Adama: "<< NewBSG::adama << endl;
	cout<<"		Hotdog: "<< NewBSG::Nuggets::HOTDOG << endl;
	cout<<"		Kat: " << NewBSG::Nuggets::KAT << endl;
	cout<<"		Chuckles: " << NewBSG::Nuggets::CHUCKLES << endl;

	NewBSG::printCast();	//Using the NewBSG namespoace i'm applying the printCast() fn.




	return 0;
}

//Implementing the printCast() fn. 
//Note: That since this fn is in the NewBSG namespace we do not have to reference "NewBSG" when calling any members.
void NewBSG::printCast()	
{
	cout << endl<< "Printing cast:"<<endl << endl;
	cout << " Starbuck: " << starbuck << endl;
	cout << " Apollo: " << apollo << endl;
	cout << " Adama: " << adama << endl;
	cout << " Kat: " << Nuggets::KAT << endl;
	cout << " The Pres: " << thePres << endl;

	cout<< " Old Adama: " << ::adama << endl << endl;
}




	
