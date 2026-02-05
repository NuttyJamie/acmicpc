#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	int n;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%lf %lf %lf", &a, &b, &c);

		printf("%.3lf, %.3lf\n", \
				(-1*b+sqrt(b*b-4*a*c))/(2*a), \
				(-1*b-sqrt(b*b-4*a*c))/(2*a));
	}
}
