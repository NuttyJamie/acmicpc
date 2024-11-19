#include <stdio.h>

int main()
{
	int x, y, n, xi, yi;
	double min;
	
	scanf("%d %d %d", &x, &y, &n);
	
	min=(double)x/y*1000;
	while(n--)
	{
		scanf("%d %d", &xi, &yi);
		double t=(double)xi/yi*1000;
		if(t < min)	min=t;
	}
	printf("%.2lf", min);
}
