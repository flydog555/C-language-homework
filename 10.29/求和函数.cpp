#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int plus(int x, int y)
{
	int sum = x + y;
	return sum;
}

int main()
{
	int a, b;
	scanf("%d+%d", &a, &b);
	printf("%d+%d=%d",a,b,plus(a, b));
	return 0;
}