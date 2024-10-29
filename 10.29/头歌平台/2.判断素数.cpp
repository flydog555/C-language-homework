#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void prime(int x)
{
	int t;
	int sign = 0;

	for (t = 2; t < x; t++)
	{
		if (x % t == 0)
		{
			sign = 1;
			break;
		}
	}
	if (sign == 1)
	{
		printf("no");
	}
	else if (sign == 0)
	{
		printf("yes");
	}
}
int main()
{
	int i;
	scanf("%d", &i);
	prime(i);
	return 0;
}