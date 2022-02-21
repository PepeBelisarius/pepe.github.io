#include "functions.h"
#include <iostream>
#include <cctype>
using namespace std;

int TOLOWER(string &s2)
{
	for (char & i : s2)
	{
		i=tolower(i);
		//cout << i;
	}
	cout <<s2<< " ";
	return 0;
}
int ISUPPER(const string s2)
{
	for (auto &i : s2)
	{
		if (isupper(i))
			cout << i ;
	}
	cout << " ";
	return 0;
}