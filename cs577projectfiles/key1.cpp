#include <stdio.h>
#include <string>
#include <iostream>
#include "keycommon.h"
#include "key1stuff.h"
using namespace std;
int main(int argc, char *argv[])
{
	stuff things;
	key1stuff stuffs;
	if (argc > 2) { cout << things.nope() << endl; }
	else if (argc < 1) { cout << stuffs.sizecheck(argc, argv) << endl; }
	else if (argc > 1) { cout << stuffs.sizecheck(argc, argv) << endl; }
	return 0;
}