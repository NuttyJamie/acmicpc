#include <stdio.h>

int main()
{
	int n;
	double d, f, p;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%lf %lf %lf", &d, &f, &p);
		printf("$%.2lf\n", d*f*p);
	}
}
