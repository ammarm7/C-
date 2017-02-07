#include <iostream>
using namespace std;

int main()
{

	int x = 1;
	int y = 2;

	if(x>y){
		cout<<"X is bigger than Y"<<endl;
	}else{
		cout<<"Y is bigger than X"<<endl;
	}

	(x>y) ? cout<<cout<<"X is bigger than Y"<<endl: cout<<"Y is bigger than X"<<endl;


	return 0;
}
