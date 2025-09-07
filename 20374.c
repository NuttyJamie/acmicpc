#include <stdio.h>

int main()
{
	long long e, cent, total=0, totalcent=0;

	while(scanf("%lld.%lld", &e, &cent) != EOF)
	{
		total+=e;
		totalcent+=cent;
	}
	total+=totalcent/100;
	totalcent%=100;

	printf("%lld.%02lld", total, totalcent);
}
