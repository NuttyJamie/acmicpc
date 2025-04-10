#include <stdio.h>

int main()
{
	double p;
	int n, b;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %lf", &b, &p);
		printf("%.4lf %.4lf %.4lf\n", 60.0*(b-1)/p, (double)(b*60)/p, 60.0*(b+1)/p);
	}
}
