#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

int main()
{
	int arr1[10] = { 1,1,0,0,0,0,0,0,0,0 };
	int arr2[10] = { 0 };
	int i = 0; //����
	int n; //��n+1��λ��
	printf("1\n");
	printf("1 1\n");
	for (i = 3; i <= 10; i++)
	{
		printf("1 ");
		for (n = 1; n < i; n++)
		{
			arr2[0] = 1;
			arr2[i - 1] = 1;
			arr2[n] = arr1[n - 1] + arr1[n];
			if (arr2[n] != 0)
			{
				printf("%d ", arr2[n]);
			}

			if (n == i - 2)
			{
				printf("%d\n", arr2[i - 1]);
				memcpy(arr1, arr2, sizeof(arr1));
				break;
			}
		}
	}
	return 0;
}