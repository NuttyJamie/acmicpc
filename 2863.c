#include <stdio.h>

double rotate(int a, int b, int c, int d)
{
	return (double)((a*d)+(c*b))/(double)(c*d);
}

int main()
{
	int a, b, c, d, max=0, r=0;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	max=rotate(a, b, c, d);
	if(max < rotate(c, a, d, b))	r=1, max=rotate(c, a, d, b);
	if(max < rotate(d, c, b, a))	r=2, max=rotate(d, c, b, a);
	if(max < rotate(b, d, a, c))	r=3, max=rotate(b, d, a, c);
		
	printf("%d", r);
}
