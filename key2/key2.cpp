#include <keycommon.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>


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
				if (argv < 2)
				{
					things.nopecleanerpub(true);
					return 0;
				}
				else if (argv > 2)
				{
					things.nopecleanerpub(true);
					return 0;
				}

			}
			if (argv > -1)
			{
				if (argv < 3)
				{
					things.nopecleanerpub(true);
					return 0;
				}
				if (argv < 3)
				{
					if (compare(args[1]))
					{
						things.nopecleanerpub(false);
					}
				}
			}
		}
	}
	things.nopecleanerpub(true);
	return 0;
}

bool compare(string data)
{
	return comparator(data, "microsoft.com");
}

bool comparator(string request, string result, int count = 0)
{
	switch()
}
string hostname_to_ip(char *hostname)
{
	stuff things;
	addrinfo *info;

	if((getaddrinfo(hostname, NULL,NULL, &info))!=0)
	{
		things.nopecleanerpub(true);
		return ("NOPE");
	}
	
	return inet_ntoa(((struct sockaddr_in *)info->ai_addr)->sin_addr);
}

string buildanswer(string current ="g", int count=0)
{
	if (count == 7)
	{
		return current.append("om");
	}
	if (count == 0 || count==1)
	{
		return buildanswer(current.append("o"), count + 1);
	}
	switch (current[count])
	{
	case 'o':
		return buildanswer(current.append("g"), count + 1);
		break;
	case 'g':
		return buildanswer(current.append("l"), count + 1);
		break;
	case 'l':
		return buildanswer(current.append("e"), count + 1);
		break;
	case 'e':
		return buildanswer(current.append("."), count + 1);
		break;
	case '.':
		return buildanswer(current.append("c"), count + 1);
		break;
	}
}