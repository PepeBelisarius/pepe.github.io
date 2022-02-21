#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i = 40000;
	int* ip = &i;
	cout << *ip <<" "<< ip << endl;
	ip = 0;
	cout << ip << endl;
	return 0;
}