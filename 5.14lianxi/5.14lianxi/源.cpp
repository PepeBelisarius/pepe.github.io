#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> v1;
	int cnt[20]={0};
	string s1;
	string prech;
	bool iscon = false;
	while ( cin >> s1)
	{
		v1.push_back(s1);
	}
	for (int i=0;i<v1.size()-1;i++)
	{
		if(v1[i]==v1[i+1])
		{
			iscon = true;
			int k = i;
			while (iscon&&k<v1.size()-1)
			{
				if(v1[k]==v1[k+1])
				{
					++cnt[i];
					k+=1;
				}
				else
				{
					iscon = false;
				}
			}
			cout << v1[i] << "ÖØ¸´ÁË" << cnt[i]+1 << "´Î" << endl;
			//cout << k << endl;
			i = k ;
		}
	}

	return 0;
}