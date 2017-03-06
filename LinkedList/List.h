//List.h

#ifndef LIST_H
#define LIST_H

#include <string>
#include "Student.h"
using namespace std;

class List
{
	class Node	//Nested Class
	{
	 friend class List;
	 private:
	  Student* data;
	  Node* next;
	};	
	
	public:
	 List();
	 ~List();
	 void add(Student*);
	 void remove(const string&);
	 void print();

	private:
	 Node* head;


};

#endif
	
