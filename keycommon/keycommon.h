#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <locale>
#include <functional>
using namespace std;
class stuff
{
private:
	static bool spacecheck(char c) { return(c == ' '); }
	string removespace(string s)
	{
		s.erase(std::remove_if(s.begin(), s.end(), std::bind(std::isspace<char>, std::placeholders::_1, std::locale::classic())), s.end());
		return s;
	}
	string nopes = "12353445A342346436345634356B252325523345C266546467786768D684466484444E32423421422412F2342554646464G64687468684";
	string nopecleaner(bool flag)
	{
		char charlist[] = { '1','4','e','2','3','4','s','5','6','7','8','9','y' };		
		string innernopes = this->nopes;
		for (int p = 0; p <= innernopes.length(); p++) { for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++) { std::replace(innernopes.begin(), innernopes.end(), charlist[i], ' '); } }
		if (flag == true) { return removespace(totesnopes(innernopes)); }
		if (flag == false) { return removespace(totesyes(innernopes)); }
	}
	string totesnopes(string messages)
	{
		char charlist[] = { 'E','F','G' };
		char charlist2[] = { 'A','B','C','D' };
		char charlist3[] = { 'n','o','p','e' };
		for (int p = 0; p <= nopes.length(); p++) { for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++) { std::replace(messages.begin(), messages.end(), charlist[i], ' '); } }
		for (int p = 0; p <= nopes.length(); p++) { for (int i = 0; i < sizeof(charlist2) / sizeof(charlist2[0]); i++) { std::replace(messages.begin(), messages.end(), charlist2[i], charlist3[i]); } }
		return messages;
	}
	string totesyes(string messages)
	{
		char charlist2[] = { 'E','F','G' };
		char charlist[] = { 'A','B','C','D' };
		char charlist3[] = { 'y','e','s' };
		for (int p = 0; p < nopes.length(); p++) { for (int i = 0; i < sizeof(charlist) / sizeof(charlist[0]); i++) { std::replace(messages.begin(), messages.end(), charlist[i], ' '); } }
		for (int p = 0; p < nopes.length(); p++) { for (int i = 0; i < sizeof(charlist2) / sizeof(charlist2[0]); i++) { std::replace(messages.begin(), messages.end(), charlist2[i], charlist3[i]); } }
		return messages;
	}
public:
	string nope() { return nopecleaner(true); }
	string nope2() { return nopecleaner(true); }
	string nopecleanerpub(bool flag) { return nopecleaner(flag); }
};