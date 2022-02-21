#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch, prech = '\0';
	int ficnt=0,ffcnt=0;
	while (cin >> ch)
	{
		bool ffover = false; //每次输入默认数ff没结束
		if (prech == 'f')   //上一个字符是f的话
		{
			if (ch == 'i')  //当前字符是i的话
			{
				++ficnt;
			}
			if (ch == 'f')
			{
				++ffcnt;
				ffover = true;
			}
		}
		if (ffover)
		{
			prech = '\0';   //初始化
		}
		if (!ffover)
		{
			prech = ch;     //进入下一次输入，prech是上一次输入的字符。
		}
	}
	cout << ficnt <<" " << ffcnt << endl;
	return 0;
}