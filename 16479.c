#include <stdio.h>

int main()
{
	double d1, d2;
	int k;

	scanf("%d %lf %lf", &k, &d1, &d2);

	d1-=d2;
	d1/=2;
	d1*=d1;
	k*=k;

	printf("%lf", k-d1);
}
