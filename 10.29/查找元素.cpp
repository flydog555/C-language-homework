#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int search(int key, int a[], int len)
{
	int z = 0;
	int sign = 0;
	for (; z < len; z++)
	{
		if (key == a[z])
		{
			return 1;
			sign = 1;
			break;
		}
	
	}
	if (sign == 0)
	{
		return 0;
	}
}

int main()
{
	int a[12] = { 1,3,5,7,9,2,4,6,8,14,16,19 };
	int f = search(14, a, 12);
	printf("%d\n", f);
	return 0;
}