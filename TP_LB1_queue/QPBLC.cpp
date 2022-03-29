#include <iostream>
#include "qPBLC.h"
using namespace std;

int sonQueue_public::variant11()
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