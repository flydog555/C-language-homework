#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, j;//iΪѡ��������±꣬jΪ�Աȵ������±�
	int arr[10] = {0};
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int c;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] <= arr[j])
			{
				;
			}
			else if (arr[i] > arr[j])
			{
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
				c = 0;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}