#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	double sum = 0;
	int i = 1;
	while(1)
	{
		if (i % 2 == 0)
		{
			sum = sum - (1.0 / i);
		}
		else
		{
			sum = sum + (1.0 / i);
		}
			
		if (1.0 / i < 0.00001)
		{
			printf("%lf", sum);
			break;
		}
		else
		{
			;
		}
		i++;
	}
	return 0;
}