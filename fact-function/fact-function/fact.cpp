#include "fact.h"
int fact(int a)
{
	int ref = 1;
	do { ref *= a--; } while (a >= 1);
	return ref;
}