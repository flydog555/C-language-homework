#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, j, k;
	int sum = 0;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 6; k++)
			{
				if (i + k + j == 8)
				{
					printf("红色球有%d个，白色球有%d个，黑色球有%d个\n", i, j, k);
					sum++;
				}
			}
		}
	}
	printf("共%d种", sum);
	return 0;
}