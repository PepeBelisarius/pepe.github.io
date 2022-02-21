#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main()
{
	int grade;
	vector<string> scores{"F","D","C","B","A","A++"};
	string lettergrade;
	cout << "enter ur grade" << endl;
	while (cin >> grade)
	{
		/*if (grade < 60)
			lettergrade = scores[0];
		else
		{
			lettergrade = scores[grade / 10 - 5];
			if (grade != 100)
			{
				if (grade % 10 > 7)
					lettergrade += '+';
				if(grade%10<3)
					lettergrade += '-';
			}
		}*/
		lettergrade = (grade < 60) ? scores[0] : scores[grade / 10 - 5];
		string level;
		level = (grade % 10 > 7) ? "+" : (grade % 10 < 3&&grade!=100) ? "-" : "";
		lettergrade += level;
		cout << lettergrade<<endl;
	}
	return 0;

}