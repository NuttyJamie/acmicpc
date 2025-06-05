#include <stdio.h>
#include <math.h>

int main()
{
	double t;
	int d, h, w;

	scanf("%d %d %d", &d, &h, &w);

	t=sqrt(h*h+w*w);
	t=(double)d/t;

	printf("%d %d", (int)floor(t*h), (int)floor(t*w));
}
