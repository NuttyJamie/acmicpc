#include <stdio.h>
#include <math.h>

struct coord
{
	int x;
	int y;
};

double get_dist(struct coord d1, struct coord d2)
{
	double x, y;
	x=(double)d2.x-d1.x;
	y=(double)d2.y-d1.y;
	return sqrt(x*x+y*y);
}

int main()
{
	struct coord yumi, men[3];
	double dist=0, min=0;
	int i, j, k;

	scanf("%d %d", &yumi.x, &yumi.y);

	for(i=0; i < 3; ++i)
		scanf("%d %d", &men[i].x, &men[i].y);

	for(i=k=0; i < 3; ++i)
	{
		dist=get_dist(yumi, men[i]);
		for(j=0; j < 3; ++j)
		{
			if(i == j)	continue;

			dist+=get_dist(men[j], men[i]);

			while(k == i || k == j) ++k;

			dist+=get_dist(men[j], men[k]);
			if(dist < min || !min)	min=dist;
			k=0;
			dist=get_dist(yumi, men[i]);
		}
	}

	printf("%d", (int)min);
}
