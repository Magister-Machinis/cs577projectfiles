#include<time.h>
#include <stdlib.h>
#include <iostream>
#include "ceiling.h"
#include "floor.h"
void gametime(int target,floor f, ceiling c);
using namespace std;
int main()
{
	ceiling c;
	c.init();
	floor f;
	f.init();
	srand(time(0));
	gametime(rand() % (__INT_MAX__-1),f, c);
	return 0;
}
void gametime(int target, floor f, ceiling c)
{
	if (f.get() <= c.get())
	{
		int mid = c.get() + (f.get() - c.get()) / 2;
		if (mid == target) { cout << "PING" << endl; }
		else if (mid > target) { c.set(mid - 1); gametime(target, f, c); }
		else if (mid < target) { f.set(mid + 1);  gametime(target, f, c); }
	}
	else { cout << "UH OH" << endl; }
}
