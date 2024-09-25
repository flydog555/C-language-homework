#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	long i, n, fact;
	scanf("%d", &n);
	fact = 1;
	for (i = 2;i <= n;i++)
	{
		fact = fact * i;
	}
	printf("\n%d!=%ld", n, fact);
	return 0;
}