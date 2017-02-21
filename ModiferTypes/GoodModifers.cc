#include <iostream>
#include <string>
using namespace std;

class AmmarsClass{

	public:
		//Getters & Setters for firstName var
		void setFirstName(string fn)	//setter
		{
			firstName = fn;
		}
		string getFirstName()	//getter
		{
			return firstName;
		}
		
		//Getters & Setters for lastName var	
		void setLastName(string ln)	//setter
		{
			lastName = ln;
		}
		string getLastName()	//getter
		{
			return lastName;
		}
		//Getters & Setters for StudentNumber	
		void setStudentNumber(int sn)	//setter
		{
			studentNumber = sn;
		}
		int getStudentNumber()	//getter
		{
			return studentNumber;
		}

	private:
		string firstName;;
		string lastName;
		int studentNumber;

};	//Don't forget the semicollon.. That shit is important. 




int main()
{
	//initializing...
	AmmarsClass ac;

 	ac.setFirstName("Ammar");
	ac.setLastName("Mohamed");
	ac.setStudentNumber(100851469);	

	//printing...
	cout << ac.getFirstName() << endl;
	cout << ac.getLastName() << endl;
	cout << ac.getStudentNumber() << endl;

	return 0;
}
