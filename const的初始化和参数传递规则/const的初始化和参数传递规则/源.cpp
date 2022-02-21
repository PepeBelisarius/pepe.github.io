#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	
	const int i = 20;
	int ii = i;
	const int* ip = &i;
	int* ipp = &ii;
	cout << *ip << " " << *ipp << " " << ii << endl;
	return 0;
}