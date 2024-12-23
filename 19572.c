#include <stdio.h>

int main()
{
	int d1, d2, d3;
	double t;

	scanf("%d %d %d", &d1, &d2, &d3);

	t=(double)(d1+d2-d3)/2;
	if(t > 0 && d1-t > 0 && d2-t > 0)
		printf("1\n%.1f %.1f %.1f", t, d1-t, d2-t);
	else
		puts("-1");
}
