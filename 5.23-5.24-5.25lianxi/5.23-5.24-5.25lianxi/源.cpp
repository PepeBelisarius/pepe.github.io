#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	cout << "请输入两个整数" << endl;
	int a, b;
	cin >> a >> b;
	try
	{
		if (b == 0)
		{
			throw runtime_error("除数不能为0");
		}
		cout << a / b << endl;
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
		cout << "请继续输入两个整数" << endl;
		cin >> a >> b;
		cout << a / b << endl;
	}
	return 0;
}