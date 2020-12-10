#include <stdio.h>

int main()
{
	int i;
	int x[4], y[4];

	for(i=0; i<3; ++i)
	{
		scanf("%d%d", &x[i], &y[i]);
	}

	if(x[0]!=x[1])	x[3]=x[0]+x[1]-x[2];
	else			x[3]=x[2];

	if(y[0]!=y[1])	y[3]=y[0]+y[1]-y[2];
	else			y[3]=y[2];

	printf("%d %d", x[3], y[3]);
}
