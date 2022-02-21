#include "bubblesort.h"

int bubblesort(int v1[], int aa)
{
	int ii = aa;
	for(bool sort = false;sort = !sort;aa--)
		for (int i = 1; i < aa; i++)
		{
			if(v1[i-1]>v1[i])
			{
				std::swap(v1[i - 1], v1[i]);
				sort = false;
			}
		}
	
	for (auto i=0;i<ii; i++)
	{
		std::cout << v1[i] << " ";
	}
	return 0;
}