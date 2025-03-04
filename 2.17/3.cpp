#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <easyx.h>
#include <math.h>
#include <time.h>  

#define X 1280
#define Y 720


int main()
{
	//��ȡ��ǰʱ��
	int nowsec;
	int nowmin;
	int nowhour;
	time_t nowtime;
	time(&nowtime);
	struct tm* local = localtime(&nowtime);
	nowhour= (local->tm_hour % 12) * 30 + (local->tm_min / 60.0) * 30; // ʱ���ʼ�Ƕ�
	nowmin = local->tm_min * 6;  // �����ʼ�Ƕ�
	nowsec = local->tm_sec * 6;  // �����ʼ�Ƕ�

	//ʱ��
	int min=0;
	float hour=0;
	int anglemin = nowmin+270;
	int anglehour = nowhour+270;
	initgraph(X, Y);	 //��ʼ��һ����ΪX����ΪY��ͼ�ν���
	setbkcolor(BLACK); //���ñ�����ɫΪ��ɫ
	cleardevice();	 //���ͼ�ν���
	setlinecolor(WHITE);
	setfillcolor(BLACK);  //���Ʊ���
	fillcircle(X / 2, Y / 2, 250);
	setfillcolor(WHITE);  //��������Բ
	fillcircle(X / 2, Y / 2, 10);
	for (int scaleangle = 0; scaleangle < 360; scaleangle += 30)  //���ƿ̶�
	{
		BeginBatchDraw();
		double scalerad = scaleangle * 3.14 / 180.0;
		int scalex = X / 2 + 250 * cos(scalerad);
		int scaley = Y / 2 + 250 * sin(scalerad);
		setlinecolor(WHITE);
		line(X / 2, Y / 2, scalex, scaley);
		scalex = X / 2 + 220 * cos(scalerad);
		scaley = Y / 2 + 220 * sin(scalerad);
		setlinecolor(BLACK);
		line(X / 2, Y / 2, scalex, scaley);
		EndBatchDraw();
	}
	
	while (1)
	{
		for (int angle = nowsec+270; angle < 360+nowsec+270; angle += 6)
		{
			
			setfillcolor(BLACK);  //��ձ���
			fillcircle(X / 2, Y / 2, 220);
			setfillcolor(WHITE);  //���»�������Բ
			fillcircle(X / 2, Y / 2, 10);
			double rad = angle * 3.14 / 180.0;//������ĽǶ�ת��Ϊ����
			double radmin = anglemin * 3.14 / 180.0;//������ĽǶ�ת��Ϊ����
			double radhour = anglehour * 3.14 / 180.0;//��ʱ��ĽǶ�ת��Ϊ����
			//���������
			int x = X / 2 + 200 * cos(rad);
			int y = Y / 2 + 200 * sin(rad);
			//���������
			int x1 = X / 2 + 150 * cos(radmin);
			int y1 = Y / 2 + 150 * sin(radmin);
			//ʱ�������
			int x2 = X / 2 + 100 * cos(radhour);
			int y2 = Y / 2 + 100 * sin(radhour);
			setlinecolor(WHITE);
			line(X / 2, Y / 2, x, y);//����
			setlinecolor(GREEN);
			line(X / 2, Y / 2, x1, y1);//��ʼ������
			setlinecolor(RED);
			line(X / 2, Y / 2, x2, y2);//��ʼ��ʱ��
			min++;
			
			if (min == 10)//�����ƶ��ж�
			{
				setlinecolor(BLACK);
				line(X / 2, Y / 2, x1, y1);//�����һ������
				anglemin += 1;//ÿ��10���ƶ�1��
				min = 0;
				hour+=1.0/6;
				setlinecolor(GREEN);
				line(X / 2, Y / 2, x1, y1);//������һ������

			}
			
			if (hour >= 2)
			{
				setlinecolor(BLACK);
				line(X / 2, Y / 2, x2, y2);//�����һ��ʱ��
				anglehour += 1;//ÿ��2�����ƶ�1��
				hour = 0;
				setlinecolor(RED);
				line(X / 2, Y / 2, x2, y2);//������һ��ʱ��

			}

			Sleep(1000);
			setlinecolor(BLACK);
			line(X / 2, Y / 2, x, y);//�����һ������
		}
	}
	
	getchar();
	closegraph();
	return 0;
}