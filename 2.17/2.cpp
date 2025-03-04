//#include <stdio.h>
//#include <easyx.h>
//
//#define X 1280
//#define Y 720
//
//int main()
//{
//	initgraph(X, Y);	 //初始化一个长为X，宽为Y的图形界面
//	setbkcolor(YELLOW); //设置背景颜色为白色
//	cleardevice();	 //清除图形界面
//	setlinecolor(RGB(0, 0, 0));  //设置线条颜色为黑色
//	rectangle((X - Y) / 2 + 10, 10, (X - Y) / 2 + Y - 10, Y - 10); //画正方形边框
//	int a= (Y - 10)/20; //计算每条线的长度
//	for (int i = 1; i < 20; i++)
//	{
//		line((X - Y) / 2 + 10, 10 + i*a, (X - Y) / 2 + Y - 10, 10 + i*a); //画横线
//		line((X - Y) / 2+10 + i * a, 10, (X - Y) / 2+10 + i * a, Y - 10); //画竖线
//	}
//	setfillcolor(RGB(0, 0, 0)); //设置填充颜色为红色
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