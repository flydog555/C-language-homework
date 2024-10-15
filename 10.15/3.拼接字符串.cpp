#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[40];
	char arr2[40];
	int i = 0;
	int sign = 0;
	scanf("%[^\n]", arr1);
	getchar();
	scanf("%[^\n]", arr2);
	for (i = 0; i <= strlen(arr1); i++)
	{
		if (arr1[i] != arr2[i])
		{
			sign = 1;
			break;
		}
	}
	if (sign == 1)
	{
		if (strlen(arr1) >= strlen(arr2))
		{
			printf("%s", strcat(arr1, arr2));
		}
		else if (strlen(arr1) < strlen(arr2))
		{
			printf("%s", strcat(arr2, arr1));
		}
	}
	else
	{
		printf("%s", arr1);
	}
	
	
	return 0;
}