#include <stdio.h>

int main()
{
	double c;
	int k;

	scanf("%d", &k);

	c=(double)k/100+25;
	if(c < 100)			c=100;
	else if(c > 2000)	c=2000;

	printf("%.2lf", c);
}
