#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;
	scanf("%d", &input);
	int a, b, c, d;
	for (a = 1; a < 100; a++)
	{
		for (b = 0; b <= a; b++)
		{

			for (c = 0; c <= b; c++)
			{

				for (d = 0; d <= c; d++)
				{
					if (a * a + b * b + c * c + d * d == input)
					{
						printf("%d=%d*%d+%d*%d+%d*%d+%d*%d\n", input, a, a, b, b, c, c, d, d);
					}

				}
			}
		}
	}

	return 0;
}