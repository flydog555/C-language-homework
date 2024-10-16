#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int dec, a, b,i;
	int bin[16] = { 0 };
	scanf("%d", &dec);
	for (a=0,b=15;b>=0; a++,b--)
	{
		bin[a] = dec / (pow(2,b));
		dec = dec - bin[a]*(pow(2,b));
	}
	a = 0;
	for (a = 0; a <= 15; a++)
	{
		printf("%d", bin[a]);
		if ((a + 1) % 4 == 0)
		{
			printf(" ");
		}

	}
	return 0;
}