#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	long double c, sum=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%llf", &c);
		sum+=c*c*c;
	}
	printf("%lf", pow(sum, 1.0/3.0));
}
