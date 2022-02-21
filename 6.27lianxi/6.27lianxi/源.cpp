#include <iostream>
#include <vector>
using namespace std;
bool error_list(initializer_list<string> il,int ii,char e)
{
	for (auto beg = il.begin(); beg!= il.end(); beg++)
		cout << *beg << " ";
	cerr << ii << " " << e;
	cerr << endl;
	return 0;
}
void shenglue(int i...)
{
	cerr << i << " " << endl;
}
int main()
{
	string exlipse{ "exlipse!!!" };
	error_list({ "hell", "hh", "123", exlipse },72,'E');
	shenglue(42,'e',true);
	return 0;
}