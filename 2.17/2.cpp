//#include <stdio.h>
//#include <easyx.h>
//
//#define X 1280
//#define Y 720
//
//int main()
//{
//	initgraph(X, Y);	 //��ʼ��һ����ΪX����ΪY��ͼ�ν���
//	setbkcolor(YELLOW); //���ñ�����ɫΪ��ɫ
//	cleardevice();	 //���ͼ�ν���
//	setlinecolor(RGB(0, 0, 0));  //����������ɫΪ��ɫ
//	rectangle((X - Y) / 2 + 10, 10, (X - Y) / 2 + Y - 10, Y - 10); //�������α߿�
//	int a= (Y - 10)/20; //����ÿ���ߵĳ���
//	for (int i = 1; i < 20; i++)
//	{
//		line((X - Y) / 2 + 10, 10 + i*a, (X - Y) / 2 + Y - 10, 10 + i*a); //������
//		line((X - Y) / 2+10 + i * a, 10, (X - Y) / 2+10 + i * a, Y - 10); //������
//	}
//	setfillcolor(RGB(0, 0, 0)); //���������ɫΪ��ɫ
//	fillcircle((X - Y) / 2 + 10 + 3 * a, 10 + 3 * a, 10); //(3,3)
//	fillcircle((X - Y) / 2 + 10 + 3 * a, 10 + 10 * a, 10);  //(3,10)
//	fillcircle((X - Y) / 2 + 10 + 3 * a, 10 + 17 * a, 10);  //(3,17)
//
//	fillcircle((X - Y) / 2 + 10 + 10 * a, 10 + 3 * a, 10);  //(10,3)
//	fillcircle((X - Y) / 2 + 10 + 10 * a, 10 + 10 * a, 10);  //(10,10)
//	fillcircle((X - Y) / 2 + 10 + 10 * a, 10 + 17 * a, 10);  //(10,17)
//
//	fillcircle((X - Y) / 2 + 10 + 17 * a, 10 + 3 * a, 10);  //(17,3)
//	fillcircle((X - Y) / 2 + 10 + 17 * a, 10 + 10 * a, 10);  //(17,10)
//	fillcircle((X - Y) / 2 + 10 + 17 * a, 10 + 17 * a, 10);  //(17,17)
//	getchar();
//	closegraph();
//	return 0;
//}