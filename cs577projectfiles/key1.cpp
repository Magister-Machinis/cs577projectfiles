#include <stdio.h>
#include <string>
#include <iostream>
#include "keycommon.h"

using namespace std;

int main(int argc, char *argv[])
{
	stuff things;
	if (argc > 2)
		things.nope();
	else if (argc < 1)
		sizecheck(argc, argv);
	else if (argc > 1)
		sizecheck(argc, argv);

	return 0;
}

void sizecheck(int count, char *data[])
{
	stuff things;
	if (count == 33)
		checkdone(data, 22, 44);
	if (count < 1)
		things.nope2();
	else
		sizecheck(33, data);
}
void checkdone(char *data[], int use, int less)
{
	stuff things;
	
	if (checker(data[1], '8') == true)
	{
		cout << things.nopecleanerpub(false);
	}
	else
	{
		cout << things.nopecleanerpub(true);
	}
}
bool checker(string data, char check, int count = 0)
{
	if (count = -1)
	{
		if (data[count + 1] == '/0')
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	switch (data[count])
	{
	case '*':
		return checker(data, 'j', count + 1);
	case '(':
		return checker(data, '`', count + 1);
	case 'h':
		return checker(data, 't', count + 1);
	case 't':
		return checker(data, 'L', count + 1);
	case 'L':
		return checker(data, 'S', count + 1);
	case 'S':
		return checker(data, 'g', count + 1);
	case 'g':
		return checker(data, '7', count + 1);
	case 'a':
		return checker(data, 'b', count + 1);
	case 'b':
		return checker(data, 'e', count + 1);
	case 'e':
		return checker(data, 'c', count + 1);
	case 'c':
		return checker(data, 'k', count + 1);
	case 'k':
		return checker(data, 'l', count + 1);
	case 'l':
		return checker(data, 's', count + 1);
	case '`':
		if (count != data.length)
		{
			break;
		}
		return checker(data, '8', -1);
	case '9':
		return checker(data, 'A', count + 1);
	case 'A':
		return checker(data, 'a', count + 1);
	case 's':
		return checker(data, 'd', count + 1);
	case 'd':
		return checker(data, 'h', count + 1);
	case '8':
		return checker(data, '.', count + 1);
	case '.':
		return checker(data, '1', count + 1);
	case '1':
		return checker(data, '9', count + 1);
	case '7':
		return checker(data, 'p', count + 1);
	case 'p':
		return checker(data, '*', count + 1);
	default:
		return false;
	}
	return false;
}