#include <stdio.h>

int main()
{
	double d, a, b, f;
	int p, n;

	scanf("%d", &p);

	while(p--)
	{
		scanf("%d %lf %lf %lf %lf", &n, &d, &a, &b, &f);

		printf("%d %lf\n", n, d*f/(a+b));
	}
}
