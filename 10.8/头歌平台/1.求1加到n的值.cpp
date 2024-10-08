#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b = 0;
    int sum = 0;
    for (b = 0; b <= a; b++)
    {
        sum = sum + b;
    }
    printf("%d", sum);


    return 0;
}