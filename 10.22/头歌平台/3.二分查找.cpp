#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int m, n;
	int arr[100] = {  };
	scanf("%d", &n);
	int i;
	for (i = 0; i <= n-1; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	int left =0;
	int right = n-1;
	int mid = 0;
	int sign = 0;
	
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == m)
		{
			printf("%d", mid + 1);
			sign = 1;
			break;
		}
		else if (arr[mid] > m)
		{
			right = mid - 1;
		}
		else if (arr[mid] < m)
		{
			left = mid + 1;
		}
		
	}
	if (sign == 0)
	{
		printf("%d", right);
	}
	

	return 0;
}