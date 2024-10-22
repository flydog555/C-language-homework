#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, j, n;
	int y[30][30] = { 0 };
	for (i = 0; i < 30; i++)
	{
		y[i][0] = y[i][i] = 1;
	}

	for (i = 2; i < 30; i++)
	{
		for (j = 1; j < i; j++)
		{
			y[i][j] = y[i - 1][j - 1] + y[i - 1][j];
		}
	}
	
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("%d\t ", y[i][j]);
				//printf("\n");
			}
			printf("\n");

		}
	}
	return 0;
}