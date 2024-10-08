#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int f1, f2;
	printf("       1       1");
	f1 = 1;
	f2 = 1;
	int i = 0;
	int t = 2;
	int o = 0;
	int l = 0;
	int sum = 0;
	for (i = 3; i <= 24; i++)
	{
		if (t % 4 == 0)
		{
			printf("\n");
		}
		/*else
		{
			printf("     ");
		}*/
		o = f1 + f2;
		l = o;
		while (l > 0)
		{
			l = l / 10;
			sum++;
		}
		switch (sum)
		{
		case 1:
			printf("       ");
			break;
		case 2:
			printf("      ");
			break;
		case 3:
			printf("     ");
			break;
		case 4:
			printf("    ");
			break;
		case 5:
			printf("   ");
			break;
		}
		sum = 0;
		printf("%d",o);
		f1 = f2;
		f2 = o;
		t++;
	}
	return 0;
}