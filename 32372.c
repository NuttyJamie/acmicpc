#include <stdio.h>

int main()
{
	int n, m, x, y, k;
	int xmin=1, xmax=0, ymin=1, ymax=0;
	int target_x=0, target_y=0;

	scanf("%d %d", &n, &m);
	xmax=ymax=n;

	while(m--)
	{
		scanf("%d %d %d", &x, &y, &k);

		switch(k)
		{
			case 1:
				xmax=(xmax > x)?	x:xmax;
				target_y=y;
				if(xmax-xmin == 1)	target_x=xmin;
				break;
			case 5:
				xmin=(xmin < x)?	x:xmin;
				target_y=y;
				if(xmax-xmin == 1)	target_x=xmax;
				break;
			case 3:
				ymin=(ymin < y)?	y:ymin;
				target_x=x;
				if(ymax-ymin == 1)	target_y=ymax;
				break;
			case 7:
				ymax=(ymax > y)?	y:ymax;
				target_x=x;
				if(ymax-ymin == 1)	target_y=ymin;
				break;
			case 2:
				xmax=(xmax > x)?	x:xmax;
				ymin=(ymin < y)?	y:ymin;
				if(xmax-xmin == 1)	target_x=xmin;
				if(ymax-ymin == 1)	target_y=ymax;
				break;
			case 4:
				xmin=(xmin > x)?	x:xmin;
				ymin=(ymin < y)?	y:ymin;
				if(xmax-xmin == 1)	target_x=xmax;
				if(ymax-ymin == 1)	target_y=ymax;
				break;
			case 6:
				xmin=(xmin < x)?	x:xmin;
				ymax=(ymax > y)?	y:ymax;
				if(xmax-xmin == 1)	target_x=xmax;
				if(ymax-ymin == 1)	target_y=ymin;
				break;
			case 8:
				xmax=(xmax > x)?	x:xmax;
				ymax=(ymax > y)?	y:ymax;
				if(xmax-xmin == 1)	target_x=xmin;
				if(ymax-ymin == 1)	target_y=ymin;
				break;
		}
		if(target_x && target_y)
		{
			printf("%d %d", target_x, target_y);
			return 0;
		}
	}
	printf("%d %d", (xmin+xmax)/2, (ymin+ymax)/2);
}


