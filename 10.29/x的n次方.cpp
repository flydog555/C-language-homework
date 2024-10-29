#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

double power(int a, int b)
{
	int i;
	double sum=1.0;
	for (i = 1; i <= b; i++)
	{
		sum *= a;
		
	}
	return sum;
}
int main()
{
	int x, n;
	scanf("%d%d", &x, &n);
	printf("%d to the power %d is %lf\n", x, n, power(x, n));
	return 0;
}