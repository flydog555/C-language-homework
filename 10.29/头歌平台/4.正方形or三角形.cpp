#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

// 函数声明  
void printSquare();
void printTriangle();
void showMenu();
int getUserChoice();

// 打印正方形的函数（现在需要内部询问边长并输入）  
void printSquare()
{
    getchar();
    int x;
    scanf("%d", &x);
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// 打印三角形的函数（现在需要内部询问高度并输入）  
void printTriangle()
{
    getchar();
    int x;
    scanf("%d", &x);
    int i, j;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
    }   printf("\n");
}

// 显示菜单的函数  
void showMenu() {
    printf("\n--- 主菜单 ---\n");
    printf("1. 打印正方形\n");
    printf("2. 打印三角形\n");
    printf("3. 退出\n");
    printf("请选择一个选项：");
}


int main() {
    int choice;
    showMenu();

    while (scanf("%d", &choice) != EOF) {
        switch (choice) {
        case 1:
            printSquare();
            break;
        case 2:
            printTriangle();
            break;
        case 3:
            printf("退出程序。\n");
            break;
        default:
            printf("无效的选择，请重试。\n");
        }
    }

    return 0;
}


