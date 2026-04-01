#include <stdio.h>

int main()
{
	double d;
	int t, cm, y, su, sa, f, b, gs, gc, w;
	int dough, max, sum;

	scanf("%d", &t);

	while(t--)
	{
		sum=0;

		scanf("%d %d %d %d %d %d %d %d %d", \
				&cm, &y, &su, &sa, &f, &b, &gs, &gc, &w);

		d=(double)cm/8;
		d=(d < (double)y/8)?	d:(double)y/8;
		d=(d < (double)su/4)?	d:(double)su/4;
		d=(d < (double)sa)?		d:(double)sa;
		d=(d < (double)f/9)?	d:(double)f/9;
		dough=16*d;

		while(dough && (b || gs || gc || w))
		{
			int *topping=&b;
			max=b;

			if(max < gs/30)
			{
				max=gs/30;
				topping=&gs;
			}
			if(max < gc/25)
			{
				max=gc/25;
				topping=&gc;
			}
			if(max < w/10)
			{
				max=w/10;
				topping=&w;
			}

			if(max < dough)
			{
				sum+=max;
				dough-=max;
			}
			else
			{
				sum+=dough;
				dough=0;
			}
			*topping=0;
		}

		printf("%d\n", sum);
	}
}
