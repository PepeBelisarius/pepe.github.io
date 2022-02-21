#include <iostream>
#include <string>
using namespace std;

int main()
{
	string v1;
	cin >> v1;
	int cnt = 0;
	for (auto &i:v1)
	{
		if (i == 'a' || i == 'e' || i == 'u' || i == 'o' || i == 'i')
		{
			++cnt;
		}
	}
	cout << cnt << endl;
	return 0;
}