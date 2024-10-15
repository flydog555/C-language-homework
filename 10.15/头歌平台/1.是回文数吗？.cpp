#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr1[10] = {0};
	int input = 0;
	int i = 0;
	int l = 0;
	int a = 0;
	scanf("%s", arr1);
	for (i = 0; i < 10; i++)
	{
		if (arr1[i] == '\0')
		{
			l = i;
			break;
		}
	}
	
	int left = 0;
	int right = l - 1;
	int output=1;
	while (left < right)
	{
		if (arr1[left] != arr1[right])
		{
			output = 0;
			break;
		}
		left++;
		right--;
	}
	if (output == 1)
	{
		printf("Yes");
	}
	else if (output == 0)
	{
		printf("No");
	}
	return 0;
}