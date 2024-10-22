#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	printf("Input m, n:");
	int m, n;
	int p = 0;
	//第一次输入
	scanf("%d,%d", &m, &n);
	getchar();

	int arr[100] = {0};
	int arr1[10];
	int arr2[100] = {0};
	int i = 0;//n
	int j = 0;
	int c = 0;//m
	int output = 0;
	//输入矩阵
	for (; c <= m-1; c++)
	{
		for (i=0; i <= n-1; i++)
		{
			scanf("%d", &arr1[i]);
		}
		getchar();
		
		for (j = 0; p <= n, j < n; p++, j++)
		{
			arr[p] = arr1[j];
			arr2[p] = arr1[j];
			arr1[j] = 0;
		}

	}
	//比大小
	for (i = 1; i < m*n; i++)
	{
			if (arr[0] >= arr[i])
			{
				output = 1;
			}
			else if (arr[0] < arr[i])
			{
				c = arr[0];
				arr[0] = arr[i];
				arr[i] = c;
				c = 0;
			}
	}
	//判断r/c
	for (i = 0; i <= m*n; i++)
	{
		if (arr[0] == arr2[i])
		{
			output = i+1;
		}

	}
	int col = output % n;
	if (col == 0)
	{
		col = 1;
	}
	int row;
	if (n == 5)
	{
		row = (output / n) + 1;
	}
	else if (n < 5)
	{
		row = (output / n);
	}
	printf("Input %d*%d array:\n", m, n);
	printf("max=%d, row=%d, col=%d", arr[0], row, col);

	return 0;
}