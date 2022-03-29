#include <iostream>
#include "qPRTCTD.h"
using namespace std;

int sonQueue_protected::variant11()
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
		g = (float)size / sum;
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
int sonQueue_protected::pop() { return parQueue::pop(); }
void sonQueue_protected::push(int el) { return parQueue::push(el); }
void sonQueue_protected::print() { return parQueue::print(); }
void sonQueue_protected::merge(sonQueue_protected& Q1) { return parQueue::merge(Q1); }
void sonQueue_protected::copy(sonQueue_protected& Q1) { return parQueue::copy(Q1); }
bool sonQueue_protected::isEmpty() { return parQueue::isEmpty(); }