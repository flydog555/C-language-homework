#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[10] = { 0 };
	int arr1[10] = { 0 };
	int i = 0;
	int c;
	//����
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	for (i = 0; i < 10; i++)
	{
		arr1[i] = arr[i];
	}
	//�ȴ�С
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
	//����&�ж�
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