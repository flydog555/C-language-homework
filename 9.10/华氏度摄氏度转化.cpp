#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float  fahr, celsius;
    scanf("%f", &fahr);  //输入华垔温度
    celsius = 5 * (fahr - 32) / 9;
    printf("celsius = %f\n", celsius);//输出摄垔温度
    return 0;
}
