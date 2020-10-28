#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>



using namespace std;

int getparams();
void start(int *params);
void go(int x, int y,string path="~", int counter=0);
string newpath(string oldpath);
string getfolder();
string to_string(const char* chars);
string stringgen(string path = "/");
string newfolder();

int main(int argc, char *argv[])
{
	int test[] = { 1, 2 };
	srand(time(0));
	start(test);

	return 0;
}

int getparams()
{
	
	return rand() % 101 + 1;
}
void start(int *params)
{
	go(getparams(), getparams(), newpath("~"));
}

void go(int x, int y, string path, int counter)
{
			
	if (counter < y )
	{
		for (int g = 0; g < x; g++)
		{
			go(x, y, newpath(path), counter + 1);
		}
	}
}

string newpath(string oldpath)
{	
	return to_string(oldpath.append("/").append(to_string(getparams())).append(to_string(getparams())).c_str());
}
string newfolder()
{
	unsigned long long int nums;
	ifstream access(getfolder(), ios::in | ios::binary);
	access.read(reinterpret_cast<char*>(&nums), sizeof(nums));
	access.close();
	return to_string(nums);
}
string to_string(const char *chars)
{
	string s(chars);
	return s;
}

string getfolder()
{
	return stringgen();
}

string stringgen(string path)
{
	
	if (path.length() == 1)
	{
		return stringgen(path.append("d"));
	}
	switch (path.back())
	{
	case 'd':
		if (path.length() == 2)
			return stringgen(path.append("e"));
		else
			return stringgen(path.append("o"));
	case 'e':
		return stringgen(path.append("v"));
	case 'v':
		return stringgen(path.append("/"));
	case '/':
		return stringgen(path.append("u"));
	case 'u':
		return stringgen(path.append("r"));
	case 'r':
		return stringgen(path.append("a"));
	case 'n':
		return stringgen(path.append("d"));
	case 'o':
		return path.append("m");
	}
}