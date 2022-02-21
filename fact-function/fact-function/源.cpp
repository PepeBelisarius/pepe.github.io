#include <iostream>
#include "fact.h"
using namespace std;

int main()
{
	cout << "请输入一个整数，将输出它的阶乘" << endl;
	int a;
	cin >> a;
	cout << fact(a) << endl;
}