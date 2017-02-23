//Thing.h

#ifndef THING_H	//Include Guard
#define THING_H
#include <string.h>

class Thing
{
	public:
		Thing(int=0, string="");	//Default Constructors
		~Thing();

	private:
		int id;
		string location;
};

#endif	//Ending the Include Guard

