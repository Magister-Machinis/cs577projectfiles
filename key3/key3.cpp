#include "keycommon.h"
#include <string>
#include <stdio.h>
#include <thread>
#include <sys/statvfs.h>
#include <sys/sysinfo.h>
int nextcheck(char* data[]);
bool firstcheck(string, unsigned);
bool secondcheck(string);
bool thirdcheck(string);
int moremain(int, char*[]);
struct sysinfo info;
struct statvfs fsinfo;
using namespace std;
int main(int argc, char *argv[])
{
	stuff thing;
	if (argc == -7) { nextcheck(argv); }
	if (argc > 4) { return	moremain(argc - 1, argv); }
	if (argc < 2) { return	moremain(argc - 1, argv); }
	if (argc < 0) { return moremain(argc, argv); }
	if (argc > 0) { return	moremain(argc - 1, argv); }
	if (argc < 0) { sysinfo(&info); return moremain(argc + 1, argv); }
	if (argc == 0) { return moremain(-8, argv); }
	return 0;
}
int moremain(int argc, char *argv[])
{
	stuff thing;
	if (argc == -7) { return nextcheck(argv); }
	if (argc == 0) { return moremain(-8, argv); }
	if (argc < 0) { return moremain(argc + 1, argv); }
	if (argc > 4) { return	moremain(argc - 1, argv); }
	if (argc < 2) { statvfs("/", &fsinfo); return	moremain(argc - 1, argv); }
	if (argc < 0) { return moremain(argc, argv); }
	if (argc > 0)	{ return moremain(argc-1, argv);}
	return 0;
}
int nextcheck(char *data[])
{
	stuff thing;
	string data2;
	try
	{
		data2 = data[1];
	}
	catch (exception& e)
	{
		cout << thing.nope() << endl;
		cout << e.what() << endl;
		return 0;
	}
	if (firstcheck(data2, 22) == true) { cout << thing.nopecleanerpub(false) << endl; }
	else { cout << thing.nopecleanerpub(true) << endl; }
	return 0;
}
bool firstcheck(string data , unsigned num)
{
	return (data[0] == to_string(thread::hardware_concurrency())[0] & secondcheck(data));
}
bool  secondcheck(string data)
{	
	return((data.find(to_string(info.totalram)) != string::npos) & thirdcheck(data));
}
bool thirdcheck(string data)
{	
	return(data.find(to_string(fsinfo.f_frsize * fsinfo.f_blocks)) != string::npos);
}