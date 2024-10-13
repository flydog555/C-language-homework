#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n, k, i,x;
	scanf("%d %d", &x, &k);
	int a = 0;
	
	for (n=x; n >= 10; n--)
	{
		int output = 1;
		for (i = 2; i <= n/2; i++)
		{
			
			if (n % i == 0)
			{
				output = 0;
				break;
			}
		}
		if (output == 1)
		{
			printf("%d\n", n);
			a++;
		}
		if (a >= k)
		{
			break;
		}
	}
	return 0;
}