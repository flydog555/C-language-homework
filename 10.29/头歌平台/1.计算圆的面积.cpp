#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

float area(float x)
{
	float s = 3.14 * x * x;
	return s;
}
int main()
{
	float r;
	scanf("%f", &r);
	float s = area(r);
	printf("%f",s);
	return 0;
}