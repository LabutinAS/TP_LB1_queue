#include "qPARENT.h"
class sonQueue_protected : protected parQueue
{
public:
	int variant11();
	int pop(); 
	void push(int el); 
	void print();
	void merge(sonQueue_protected& Q1); 
	void copy(sonQueue_protected& Q); 
	bool isEmpty(); 
};
