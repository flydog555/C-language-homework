#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

char fun(int s)
{
    char grade;     // 存储分数对应的等级
    /********** Begin **********/
    if (s >= 90 && s <= 100)
    {
        grade = 'A';
    }
    else if (s >= 80 && s <= 89)
    {
        grade = 'B';
    }
    else if (s >= 70 && s <= 79)
    {
        grade = 'C';
    }
    else if (s >= 60 && s <= 69)
    {
        grade = 'D';
    }
    else if(s<=59&&s>=0)
    {
        grade = 'E';
    }

    return grade;
    /**********  End  **********/
}

int main(void)
{
    int  score;
    scanf("%d", &score);
    printf("The grade is: %c\n", fun(score));
    return 0;
}