#include <iostream>
#include <vector>
using namespace std;

void ptr(const vector<string> str,const int index)
{   
	static int mm = index;
	if (!str.empty() && mm < str.size())
	{
		cout << str[mm++] << " "; 
		ptr(str, 450);
	}
}
int main()
{
	vector<string> STR{ "hello","nihao","tingdedaoma","nmsl" };
	ptr(STR, 0);
	return 0;
}