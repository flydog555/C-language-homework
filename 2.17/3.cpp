#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <easyx.h>
#include <math.h>
#include <time.h>  

#define X 1280
#define Y 720


int main()
{
	//获取当前时间
	int nowsec;
	int nowmin;
	int nowhour;
	time_t nowtime;
	time(&nowtime);
	struct tm* local = localtime(&nowtime);
	nowhour= (local->tm_hour % 12) * 30 + (local->tm_min / 60.0) * 30; // 时针初始角度
	nowmin = local->tm_min * 6;  // 分针初始角度
	nowsec = local->tm_sec * 6;  // 秒针初始角度

	//时钟
	int min=0;
	float hour=0;
	int anglemin = nowmin+270;
	int anglehour = nowhour+270;
	initgraph(X, Y);	 //初始化一个长为X，宽为Y的图形界面
	setbkcolor(BLACK); //设置背景颜色为黑色
	cleardevice();	 //清除图形界面
	setlinecolor(WHITE);
	setfillcolor(BLACK);  //绘制表盘
	fillcircle(X / 2, Y / 2, 250);
	setfillcolor(WHITE);  //绘制中心圆
	fillcircle(X / 2, Y / 2, 10);
	for (int scaleangle = 0; scaleangle < 360; scaleangle += 30)  //绘制刻度
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
			
			setfillcolor(BLACK);  //清空表盘
			fillcircle(X / 2, Y / 2, 220);
			setfillcolor(WHITE);  //重新绘制中心圆
			fillcircle(X / 2, Y / 2, 10);
			double rad = angle * 3.14 / 180.0;//将秒针的角度转换为弧度
			double radmin = anglemin * 3.14 / 180.0;//将分针的角度转换为弧度
			double radhour = anglehour * 3.14 / 180.0;//将时针的角度转换为弧度
			//秒针的坐标
			int x = X / 2 + 200 * cos(rad);
			int y = Y / 2 + 200 * sin(rad);
			//分针的坐标
			int x1 = X / 2 + 150 * cos(radmin);
			int y1 = Y / 2 + 150 * sin(radmin);
			//时针的坐标
			int x2 = X / 2 + 100 * cos(radhour);
			int y2 = Y / 2 + 100 * sin(radhour);
			setlinecolor(WHITE);
			line(X / 2, Y / 2, x, y);//秒针
			setlinecolor(GREEN);
			line(X / 2, Y / 2, x1, y1);//初始化分针
			setlinecolor(RED);
			line(X / 2, Y / 2, x2, y2);//初始化时针
			min++;
			
			if (min == 10)//分针移动判断
			{
				setlinecolor(BLACK);
				line(X / 2, Y / 2, x1, y1);//清除上一个分针
				anglemin += 1;//每隔10秒移动1度
				min = 0;
				hour+=1.0/6;
				setlinecolor(GREEN);
				line(X / 2, Y / 2, x1, y1);//画出下一个分针

			}
			
			if (hour >= 2)
			{
				setlinecolor(BLACK);
				line(X / 2, Y / 2, x2, y2);//清除上一个时针
				anglehour += 1;//每隔2分钟移动1度
				hour = 0;
				setlinecolor(RED);
				line(X / 2, Y / 2, x2, y2);//画出下一个时针

			}

			Sleep(1000);
			setlinecolor(BLACK);
			line(X / 2, Y / 2, x, y);//清除上一个秒针
		}
	}
	
	getchar();
	closegraph();
	return 0;
}