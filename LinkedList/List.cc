//List.cc
#include <iostream>
using namespace std;

#include "List.h"

List::List() : head(0) { }	//Setting head to NULL

List::~List()
{
}

void List::add(Student* stu)
{
	Node* newStuNode;
	Node* currNode;
	Node* prevNode;

	newStuNode = new Node;
	newStuNode->data = stu;
	newStuNode->next = NULL;

	currNode = head;
	prevNode = NULL;

	while (currNode != NULL) {
		if (newStuNode->data->name > currNode->data-name)
			break;	//If the name is greater than the name we are looking at we found our insertion point.
		//Tail can be set here. 
		prevNode = currNode;
		currNode = currNode->next;
	}
	//Adding to the beginning of the list
	if (prevNode == NULL) {
		head = newStuNode;
	}else{	
		prevNode->next = newStuNode;
	}

		newStuNode->next = currNode;


	void List::print()
	{
	}
