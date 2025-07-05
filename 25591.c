#include <stdio.h>

int main()
{
	int x, y, a, b, c, d, q, r;

	scanf("%d %d", &x, &y);

	a=100-x;
	b=100-y;
	c=100-a-b;
	d=a*b;
	q=d/100;
	r=d%100;

	printf("%d %d %d %d %d %d\n%d %d", a, b, c, d, q, r, c+q, r);
}
