#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch, prech = '\0';
	int ficnt=0,ffcnt=0;
	while (cin >> ch)
	{
		bool ffover = false; //ÿ������Ĭ����ffû����
		if (prech == 'f')   //��һ���ַ���f�Ļ�
		{
			if (ch == 'i')  //��ǰ�ַ���i�Ļ�
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
			prech = '\0';   //��ʼ��
		}
		if (!ffover)
		{
			prech = ch;     //������һ�����룬prech����һ��������ַ���
		}
	}
	cout << ficnt <<" " << ffcnt << endl;
	return 0;
}