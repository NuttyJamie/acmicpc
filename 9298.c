#include <stdio.h>

int main()
{
	int t, n;

	scanf("%d", &t);

	for(int i=1; i <= t; ++i)
	{
		scanf("%d", &n);

		double x, y, xmin, xmax, ymin, ymax, area, peri;

		scanf("%lf %lf", &x, &y);
		xmin=xmax=x;
		ymin=ymax=y;
		for(int j=1; j < n; ++j)
		{
			scanf("%lf %lf", &x, &y);
			if(x < xmin)	xmin=x;
			if(xmax < x)	xmax=x;
			if(y < ymin)	ymin=y;
			if(ymax < y)	ymax=y;
		}

		area=(xmax-xmin)*(ymax-ymin);
		peri=2*(xmax-xmin)+2*(ymax-ymin);
		printf("Case %d: Area %lf, Perimeter %lf\n", i, area, peri);
	}
}
