#include <stdio.h>

int main()
{
	struct pos {int x; int y; int live;}mosq[100];
	int t, n, m, i;

	scanf("%d", &t);

	while(t--)
	{
		int x, y, count=0;

		scanf("%d", &n);

		for(i=0; i < n; ++i)
		{
			scanf("%d %d", &x, &y);
			mosq[i].x=x;
			mosq[i].y=y;
			mosq[i].live=1;
		}

		scanf("%d", &m);

		while(m--)
		{
			int lx, rx, ly, ry;

			scanf("%d %d", &x, &y);

			lx=x-51;
			rx=x+51;
			ly=y-51;
			ry=y+51;

			for(i=0; i < n; ++i)
			{
				if((lx < mosq[i].x) &&
					(mosq[i].x < rx) &&
					(ly < mosq[i].y) &&
					(mosq[i].y < ry) &&
					(mosq[i].live))
				{
					++count;
					mosq[i].live=0;
				}
			}

		}
		printf("%d\n", count);
	}
}
