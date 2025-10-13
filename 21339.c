#include <stdio.h>

int main()
{
	double diff;
	int n, k, d, s;

	scanf("%d %d %d %d", &n, &k, &d, &s);

	diff=(double)(d*n-k*s)/(n-k);
	if(0 <= diff && diff <= 100)	printf("%lf", diff);
	else							puts("impossible");
}
