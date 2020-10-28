#include <stdio.h> 
#include <stdlib.h> 
#include <netdb.h> 
#include <sys/types.h>  
#include "keycommon.h"
#include <string>


bool check(string name);
int main()
{
	string name;
	stuff things;

	
	cout << "Gimme a sign!" << endl;
	cin >> name;
	
	cout<< things.nopecleanerpub(check(name))<<endl;

	return 0;
}

bool check(string name)
{
	addrinfo *info;
	return (getaddrinfo(name.c_str(), NULL, NULL, &info)) != 0;
}