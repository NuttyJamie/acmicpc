#include <stdio.h>

typedef struct
{
	int g;
	int s;
	int b;
}RECORD;

int main()
{
	RECORD r[1000];
	int n, k, x, i, count=1;

	scanf("%d %d", &n, &k);
	--k;

	for(i=0; i < n; ++i)
	{
		scanf("%d ", &x);
		--x;
		scanf("%d %d %d", &r[x].g, &r[x].s, &r[x].b); 
	}

	for(i=0; i < n; ++i)
	{
		if(i != k)
		{
			if	   (r[k].g < r[i].g)	++count;
			else if(r[k].g > r[i].g)	continue;
			else if(r[k].s < r[i].s)	++count;
			else if(r[k].s > r[i].s)	continue;
			else if(r[k].b < r[i].b)	++count;
			else if(r[k].b >= r[i].b)	continue;
		}
		else	continue;
	}
	printf("%d", count);
}
