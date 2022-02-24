#include <iostream>
#include <vector>
using namespace std;
char& get(string& ptr, int index)
{
	return ptr[index];
}

int main()
{
	string hello{ "helloworld" };
	for (auto i : hello)
		cout << i << " ";
    cout << endl;
	for (int i = 0; i < hello.length(); i++)
		get(hello, i) = 'A';
	for (auto i : hello)
		cout << i << " ";
	cout << endl;
	return 0;
}