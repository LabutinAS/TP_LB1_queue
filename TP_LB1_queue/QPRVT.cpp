#include <iostream>
#include "qPRVT.h"

using namespace std;

int sonQueue_private::variant11()

{
	Unit* last = get_last();
	float result = 0;
	float sum = 0;
	float g = 0;
	int cnt = 0;
	if (size == 0)
	{
		cout << "Очередь пуста!" << endl;
	}
	else
	{
		while (last != nullptr)
		{
			sum = sum + (float)1 / (last->data);
			last = last->prev;			
		}
		g= (float)size / sum;
		last = get_last();

		while (last != nullptr)
		{
			if (last->data > g)
				cnt++;
			last = last->prev;
		}	
	}
	result = cnt;
	return result;
}

int sonQueue_private::pop() { return parQueue::pop(); }
void sonQueue_private::push(int el) { return parQueue::push(el); }
void sonQueue_private::print() { return parQueue::print(); }
void sonQueue_private::merge(sonQueue_private& Q1) { return parQueue::merge(Q1); }
void sonQueue_private::copy(sonQueue_private& Q1) { return parQueue::copy(Q1); }
bool sonQueue_private::isEmpty() { return parQueue::isEmpty(); }



