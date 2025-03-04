//#include <stdio.h>
//#include <easyx.h>
//#include <windows.h>
//
//#define X 1280
//#define Y 720
//
//int main()
//{
//	initgraph(X,Y);	 //初始化一个长为X，宽为Y的图形界面
//	COLORREF colors[] = { RED, GREEN, BLUE, YELLOW };  //需要轮流的颜色数组
//	while (1)
//	{
//		for (int i = 0; i < 4; i++)  //一个循环
//		{
//			FlushBatchDraw();
//			setfillcolor(colors[i]);//设置填充颜色
//			fillcircle(X/2, Y/2, 100);//画一个有颜色填充的圆
//			Sleep(1000);
//		}
//		
//	}
//	getchar();
//	closegraph();
//
//	return 0;
//}