#include "keycommon.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
bool compare(string);
bool comparator(const char *request, string result, int count=0);
char *hostname_to_ip(string hostname);
string buildanswer(string current="g", int count=0);
int main(int argv, char *args[])
{
	string dummy;
	stuff things;
	if (argv < 3)
	{
		if (argv > 0)
		{
			if (argv > 1)
			{
				if (argv < 2) { cout << things.nopecleanerpub(true) << endl; return 0; }
				else if (argv > 2) { cout << things.nopecleanerpub(true) << endl; return 0; }
			}
			if (argv > -1) {
				if (argv < 2) { cout << things.nopecleanerpub(true) << endl; return 0; }
				if (argv < 3) { if (compare(args[1])) { cout << things.nopecleanerpub(false) << endl; return 0; } }
			}
		}
	}
	cout <<things.nopecleanerpub(true)<< endl;
	return 0;}

bool compare(string data)
{
	return comparator(data.c_str(), "microsoft.com");
}

bool comparator(const char *request, string result, int count)
{
	if (count > sizeof(request) / sizeof(char)) { return true; }
	if (request[count] == hostname_to_ip(buildanswer())[count]) { comparator(request, result, count + 1); }
}
char *hostname_to_ip(string hostname)
{
	stuff things;
	addrinfo *info;
	if ((getaddrinfo(hostname.c_str(), NULL, NULL, &info)) != 0) { cout << things.nopecleanerpub(true) << endl; exit(0); }
	return inet_ntoa(((struct sockaddr_in *)info->ai_addr)->sin_addr);
}
string buildanswer(string current, int count)
{
	if (count == 7) { return current.append("om"); }
	if (count == 0 || count == 1) { return buildanswer(current.append("o"), count + 1); }
	switch (current[count])
	{
	case 'o': return buildanswer(current.append("g"), count + 1); break;
	case 'g': return buildanswer(current.append("l"), count + 1); break;
	case 'l': return buildanswer(current.append("e"), count + 1); break;
	case 'e': return buildanswer(current.append("."), count + 1); break;
	case '.': return buildanswer(current.append("c"), count + 1); break;
	case 'c': return buildanswer(current.append("n"), count + 1); break;
	}
}