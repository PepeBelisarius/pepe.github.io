#include <iostream>
using namespace std;
#include <vector>
#include "bubblesort.h"

int main()
{
	int v1[] = {1,8,2,64,3,4,4,2,5,78};
	cout << sizeof(v1) << endl;
	bubblesort(v1,sizeof(v1)/4);
	return 0;
}