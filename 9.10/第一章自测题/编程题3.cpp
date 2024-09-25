#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
	initgraph(200, 200);
	rectangle(50, 50, 100, 100);
	ellipse(50, 50, 100, 100);
	_getch();
	closegraph();
}
