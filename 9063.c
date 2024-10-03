#include <stdio.h>

int main()
{
	int n, x, y, xmin, xmax, ymin, ymax;

	scanf("%d", &n);

	scanf("%d %d", &x, &y);
	xmin=xmax=x;
	ymin=ymax=y;

	while(--n > 0)
	{
		scanf("%d %d", &x, &y);

		xmin=(xmin > x)?	x:xmin;
		xmax=(xmax < x)?	x:xmax;
		ymin=(ymin > y)?	y:ymin;
		ymax=(ymax < y)?	y:ymax;
	}
	printf("%d", (xmax-xmin)*(ymax-ymin));
}

