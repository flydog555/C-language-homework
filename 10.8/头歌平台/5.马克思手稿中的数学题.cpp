#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m, w, c;
	int sum = 0;

	for (m = 1; m <= 30;m++)
	{
		for (w = 1; w <= 30; w++)
		{
			for (c = 1; c <= 30; c++)
			{
				if (m + w + c == 30 && 3*m + 2*w + c == 50)
				{
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}