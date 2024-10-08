#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b;
	int l = 0;
	int sum = 0;
	for (a = 1; a < 10;a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d", a, b, a * b);
			l = a * b;
			do{
				 l = l / 10;
				 sum++;
			  } while (l > 0);
			switch (sum)
			{
			case 1:
				printf("   ");
				break;
			case 2:
				printf("  ");
				break;
			default:
				printf("  ");
			}
			sum = 0;
			l = 0;
			if (a == b)
			{
				printf("\n");
			}
		}
	}

}