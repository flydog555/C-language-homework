#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, d;
	int max = 0;
	int min = 0;
	printf("请输入4个整数:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	getchar();
	
	max = a;//假设max=a
	if (b >= max)
	{
		max = b;
	}
	if (c >= max)
	{
		max = c;
	}
	if (d >= max)
	{
		max = d;
	}
	printf("max=%d\n", max);
	min = a;
	if (b <= min)
	{
		min = b;
	}
	if (c <= min)
	{
		min = c;
	}
	if (d <= min)
	{
		min = d;
	}
	printf("min=%d\n", min);
	return 0;
}