#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int arr1[10] = { 0 };
	int i = 0;
	int c;
	//输入
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//复制
	for (i = 0; i < 10; i++)
	{
		arr1[i] = arr[i];
	}
	//比大小
	for (i = 1; i < 10; i++)
	{
		if (arr[0] >= arr[i])
		{
			;
		}
		else if (arr[0] < arr[i])
		{
			c = arr[0];
			arr[0] = arr[i];
			arr[i] = c;
			c = 0;
		}
	}
	//输入&判断
	for (i = 0; i < 10; i++)
	{
		if (arr1[i] == arr[0])
		{
			continue;
		}
		printf("%d ", arr1[i]);
	}
	return 0;
}