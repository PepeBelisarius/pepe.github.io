#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a = 20;
	int b = 33;
	int bb = 38;
	typedef int *arr;
	typedef const int *arr1;
	typedef int *const arr2;

	const arr i= &a;   //����const
	arr const ii = &a; //����const
	arr2 i2 = &bb;     //����const
	arr1 i1 = &b;      //�ײ�const

	cout << *i << " " << *ii <<" " << *i1 << endl;
	*ii = 30;
	*i2 = 55;
	//*i1 = 80;
	cout << *i << " " << *ii <<" " << *i2 << endl;
	return 0;
}