#include <iostream>
#include <vector>
using namespace std;
string(&ptr(string *i))[5]
{
	string(&a)[5] = *i;
	return a;
}
int main()
{

	string(&ptr(string i))[5];
	decltype()

	return 0;
}