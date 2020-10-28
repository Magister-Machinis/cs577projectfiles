#include <string>
#include "keycommon.h"
class key1stuff
{
private:
	string nopesid = "alksjdgjklssdfgjhdfh;lsdlfkjgsgj;ldf";
	string totesyes(string messages)
	{
		char charlist2[] = { 'E','F','G' };
		char charlist[] = { 'A','B','C','D' };
		char charlist3[] = {'s', 'y','e' };
		for (int p = 0; p < nopesid.length(); p++)
		{
			for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++)
			{
				std::replace(messages.begin(), messages.end(), charlist[i], ' ');
			}
		}
		for (int p = 0; p < nopesid.length(); p++)
		{
			for (int i = 0; i < sizeof(charlist2) / sizeof(charlist2[0]); i++)
			{
				std::replace(messages.begin(), messages.end(), charlist2[i], charlist3[i]);
			}
		}
		return messages;
	}
	string checkdone(char *data[], int use, int less)
	{
		stuff things;
		string data2 = data[1];
		if ((checker(data2, '8')) == true)
		{
			
			return things.nopecleanerpub(false);
		}
		else
		{
			return things.nopecleanerpub(true);
		}
	}
	bool checker(string data, char check, int count = 0)
	{		
		if (count == -1)
		{
			return true;
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
		case 'j':			
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
			return checker(data, 'j', count + 2);
		default:
			return false;
		}
		return false;
	}
public:
	string sizecheck(int count, char *data[])
	{
		stuff things;
		if (count == 33)
			return checkdone(data, 22, 44);
		if (count < 1)
			return things.nope2();
		else if (count >2)
			return things.nope2();
		else
			return sizecheck(33, data);
	}
};