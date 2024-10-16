#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[100];
	char arr2[100];
	int a = 0;
	int b;
	char c;
	int sign = 0;
	scanf("%[^\n]", arr1);
	for (a = 0; arr1[a] != '\0'; a++)
	{
		for (b = 0; arr1[b] != '\0'; b++)
		{
			if (arr1[a] >= arr1[b])
			{
				;
			}
			else if (arr1[a] < arr1[b])
			{
				c = arr1[a];
				arr1[a] = arr1[b];
				arr1[b] = c;
			}
		}
	}
	printf("%s", arr1);
	return 0;
}