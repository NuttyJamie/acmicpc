#include <stdio.h>
#include <math.h>

int main()
{
	double m;
	int a, b;

	scanf("%d %d", &a, &b);

	m=(double)(b-a)/400;

	printf("%lf", pow(pow(10, m)+1, -1));
}
