#include <iostream>
using namespace std;

int main(int agc,char **agv)
{
	string str;
	for (int i = 0; i != agc; i++)
		str += agv[i];
	cout << str << endl;
	return 0;
}