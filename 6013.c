#include <stdio.h>

int main()
{
	struct COORD
	{
		int x;
		int y;
	}coord[500];
	int i, n, one, two, d, max=-1;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%d %d", &coord[i].x, &coord[i].y);

	for(i=0; i < n; ++i)
	{
		for(int j=i+1; j < n; ++j)
		{
			d=(coord[i].x-coord[j].x)*(coord[i].x-coord[j].x);
			d+=(coord[i].y-coord[j].y)*(coord[i].y-coord[j].y);

			if(max < d)
			{
				max=d;
				one=i+1;
				two=j+1;
			}
		}
	}
	printf("%d %d", one, two);
}
