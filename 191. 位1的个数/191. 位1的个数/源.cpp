#include <iostream>
#include <vector>
using namespace std;

int main()
{
    uint32_t n = 1101;
    int i=hammingWeight(n);
    cout << i << endl;
	return 0;
}
int hammingWeight(uint32_t n)
{
    int i = 0;
    int cnt = 0;
    while (i < 32)
    {
        if ((n & 1) == 1)
        {
            ++cnt;
        }
        n >> 1;
        i++;
    }
    return cnt;
}