#include <iostream>
#include <string>
using namespace std;

bool main()
{
    string s1{ "bank" }, s2{ "kanb" };
    int dif1, dif2;
    int dif1t = -1;
    if (s1 == s2)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] != s1[i] && dif1t==-1)
            {
                dif1 = i;
                dif1t = 1;
                continue;
            }
            if (s2[i] != s1[i] && dif1t == 1)
            {
                dif2 = i;
                dif1t = 33;
                continue;
            }
            if (s2[i] != s1[i] && dif1t == 33)
            {
                dif1t = 44;
            }
        }
        cout << dif1t << endl;
        if (dif1t == 33 && s1[dif1] == s2[dif2] && s1[dif2] == s2[dif1])
        {
            cout << "true" << endl;
            return true;
        }
        else
        {
            cout << "F" << endl;
            return false;
        }
    }
}