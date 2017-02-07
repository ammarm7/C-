//In this example we will be putting the class in the same file but we will neber be doing that again!

#include <iostream>
using namespace std;
#include <string>

class Student //Class names always start with an uppercase
{
	public:

		Student()	//Default Constructor
		{
			number = "000000000";
			name = "Hey you!";
		}

		Student(string s1, string s2)	//Two-Parameter constructor
		{
			number = s1;
			name = s2;
		}

		string getName()	//Getter
		{
			return name;
		}

		void setName(string n)	//Setter
		{
			name = n;
		}

		void print()
		{
			cout << "Studnet: " << number << " " << name << endl;
		}


	private:
		string number;
		string name;
};	//the semicolon is most important; because if it is not there the compiler will not tell you that there is a problem here it will tell you that there is a problem wheerre there is obviously not a problem. 


int main()
{
	Student matilda("100567888", "Matilda");
	Student joe;

	matilda.print();
	joe.print();

	joe.setName("Joe");	//Lets test out the setter here!
	joe.print();


	return 0;
}
	
