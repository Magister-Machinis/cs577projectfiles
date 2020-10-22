#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
class stuff
{
private:
	static bool spacecheck(char c) { return(c == ' '); }
	string nopes ="12353445A342346436345634356B252325523345C266546467786768D684466484444E32423421422412F2342554646464G64687468684";
	string nopecleaner(bool flag)
	{
		char charlist[] = { '1','4','e','2','3','4','s','5','6','7','8','9','y' };
		string innernopes=this->nopes;
		for (int p = 0; p <= innernopes.size(); p++)
		{
			for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++)
			{
				innernopes.replace(innernopes.begin,string::npos, charlist[i],' ');
			}
		}
		
		if (flag == true)
			return totesnopes(innernopes).erase(remove_if(totesnopes(innernopes).begin, totesnopes(innernopes).end, spacecheck), totesnopes(innernopes).end);
		if (flag == false)
			return totesyes(innernopes).erase(remove_if(totesyes(innernopes).begin, totesyes(innernopes).end, spacecheck), totesyes(innernopes).end);			
	}

	string totesnopes(string messages)
	{
		char charlist[] = { 'E','F','G' };
		char charlist2[] = { 'A','B','C','D' };
		char charlist3[] = { 'n','o','p','e' };
		for (int p = 0; p != this->nopes.end; p++)
		{
			for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++)
			{
				messages.replace(messages.begin, string::npos, charlist[i], ' ');
			}
		}
		for (int p = 0; p != this->nopes.end; p++)
		{
			for (int i = 0; i < sizeof(charlist2) / sizeof(charlist2[0]); i++)
			{
				messages.replace(messages.begin, string::npos, charlist2[i], charlist3[i]);
			}
		}
		return messages;
	}

	string totesyes(string messages)
	{
		char charlist2[] = { 'E','F','G' };
		char charlist[] = { 'A','B','C','D' };
		char charlist3[] = { 'y','e','s' };
		for (int p =0; p != this->nopes.end; p++)
		{
			for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++)
			{
				messages.replace(messages.begin, string::npos, charlist[i], ' ');
			}
		}
		for (int p = 0; p != this->nopes.end; p++)
		{
			for (int i = 0; i < sizeof(charlist2) / sizeof(charlist2[0]); i++)
			{
				messages.replace(messages.begin, string::npos, charlist2[i], charlist3[i]);
			}
		}
		return messages;
	}
public:
	void nope()
	{
		cout << nopecleaner(true);
		cout << " ";
	}
	void nope2()
	{
		
		cout << nopecleaner(true);
	}
	void sizecheck(int count, string data[])
	{
		if (count == 33)
			this->checkdone(data, 22, 44);
		if (count < 1)
			this->nope2();
		else
			sizecheck(33, data);
	}
	void checkdone(string data[], int use, int less)
	{

	}

};
 int main(int argsc, string argss[])
{ 
	 stuff things;
	 if (argsc > 2)
		 things.nope();
	 else if (argsc < 1)
		 things.sizecheck(argsc, argss);
	 else if (argsc > 1)
		 things.sizecheck(argsc, argss);

	return 0;
}

 