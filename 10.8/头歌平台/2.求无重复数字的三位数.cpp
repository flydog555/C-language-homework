#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i;
	int sum = n * (n-1) * (n-2);
	printf("%d", sum);

	return 0;
}