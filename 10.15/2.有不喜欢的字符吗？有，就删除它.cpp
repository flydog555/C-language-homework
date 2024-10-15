#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[40];
	char arr1[40] = { 0 };
	scanf("%[^\n]", arr);
	getchar();
	char input;
	scanf("%c", &input);
	int index = 0;
	do{
		index = 0;
		int i;
		char sign = 'o';
		for (i = 0; arr[i] != '\0'; i++)
		{
			if (arr[i] == input)
			{
				index = i;
				sign = 'y';
				break;
			}
		}
		int a = 0;
		if (i != 0)
		{
			for (a = 0; a < i; a++)
			{
				arr1[a] = arr[a];
			}
			for (a = i; arr[a] != '\0'; a++)
			{
				arr1[a] = arr[a + 1];
			}
		}
		else if (i == 0)
		{
			for (a = 1; arr[a] != '\0'; a++)
			{
				arr1[a - 1] = arr[a];
			}
		}
		else
		{
			;
		}
		if (sign == 'o')
		{
			break;
		}
		
		memcpy(arr, arr1, sizeof(arr1));
		
	} while (1);
	
	int b;
	for (b = 0; arr1[b] != '\0'; b++)
	{
		printf("%c", arr[b]);
	}
	return 0;
}