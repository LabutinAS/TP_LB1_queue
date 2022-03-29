#include "qPARENT.h"
class sonQueue_private : private parQueue
{
public:
	int variant11();
	int pop(); 
	void push(int el);
	void print(); 
	void merge(sonQueue_private& Q1); 
	void copy(sonQueue_private& Q); 
	bool isEmpty(); 
};
