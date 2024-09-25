#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char str[3];
	int year = 0;
	int month = 0;
	int day = 0;
	printf("请输入姓名 生日（按照年 月 日顺序）：");
	scanf("%s %d %d %d", str, &year, &month, &day);
	printf("姓名：%s\n", str);
	printf("出生年月日：%d/%d/%d", day, month, year);
}
