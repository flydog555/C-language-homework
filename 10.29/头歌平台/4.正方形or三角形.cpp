#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

// ��������  
void printSquare();
void printTriangle();
void showMenu();
int getUserChoice();

// ��ӡ�����εĺ�����������Ҫ�ڲ�ѯ�ʱ߳������룩  
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

// ��ӡ�����εĺ�����������Ҫ�ڲ�ѯ�ʸ߶Ȳ����룩  
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

// ��ʾ�˵��ĺ���  
void showMenu() {
    printf("\n--- ���˵� ---\n");
    printf("1. ��ӡ������\n");
    printf("2. ��ӡ������\n");
    printf("3. �˳�\n");
    printf("��ѡ��һ��ѡ�");
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
            printf("�˳�����\n");
            break;
        default:
            printf("��Ч��ѡ�������ԡ�\n");
        }
    }

    return 0;
}


