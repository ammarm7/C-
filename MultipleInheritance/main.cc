//main.cc

#include <iostream>
#include <string>
using namespace std;

class Father{
	public:
		int height;
		void askFather(){
			cout << "I am your father" << endl;
		}
};	//Ending father class

class Mother{
	public:
		string skincolor;
		void askMother(){
			cout << "I am your mother" << endl;
		}
};

class Child : public Father, public Mother{
	public: 
		void askParents(){
			cout << "Asking my parrents" << endl;
		}
		void setColorAndHeight(string inColor, int inHeight){
			skincolor = inColor;
			height = inHeight; 
		}
		void display(){
			cout << "Height is " << height << " and color is " << skincolor << endl;
		}
};

int main()
{
	Child kareem;
	kareem.setColorAndHeight("Brown", 6);
	kareem.display();
	kareem.askFather();
	kareem.askMother();

	return 0;
}

