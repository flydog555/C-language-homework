#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 342; i++)
	{
		//ת��Ϊ7����
		int as, bs, cs;
		as = i / 49;
		bs = (i - as * 49) / 7;
		cs = i - as * 49 - bs * 7;
		//ת��Ϊ9����
		int an, bn, cn;
		an = i / 81;
		bn = (i - an * 81) / 9;
		cn = i - an * 81 - bn * 9;
		if (an == cs && bs == bn && as == cn) 
		{
			printf("%d%d%d(7)=%d%d%d(9)=%d(10)\n",as,bs,cs,an,bn,cn,i);
		}
	}
	return 0;
}