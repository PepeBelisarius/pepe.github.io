#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	cout << "��������������" << endl;
	int a, b;
	cin >> a >> b;
	try
	{
		if (b == 0)
		{
			throw runtime_error("��������Ϊ0");
		}
		cout << a / b << endl;
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
		cout << "�����������������" << endl;
		cin >> a >> b;
		cout << a / b << endl;
	}
	return 0;
}