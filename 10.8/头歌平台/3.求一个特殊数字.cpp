#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int a = (sqrt(i + 100));
		int b = (sqrt(i + 268));
		if (a*a==i+100 && b*b==i+268)
		{
			printf("%d ", i);
		}
	}

		return 0;
}