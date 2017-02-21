#include <iostream>
#include <string>	//If you are going to use strins in c++ you will need to add this.
using namespace std;

class AmmarsClass{
	public:		
		string FirstName;
		string LastName;
		int StudentNumber;
};

int main()
{
	//Initalizing a public variable in the "AmmarsClass" class. 	
	AmmarsClass ac;
	ac.FirstName = "Ammar";
	ac.LastName = "Mohamed";
	ac.StudentNumber = 100851469;

	//Printing out the details of AmmarsClass
	cout << ac.FirstName << endl;
	cout << ac.LastName << endl;
	cout << ac.StudentNumber << endl;
	



	return 0;
}
