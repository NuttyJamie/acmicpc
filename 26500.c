#include <stdio.h>

int main()
{
	int n;
	double x, y;

	scanf("%d", &n);
	while(n-- > 0)
	{
		scanf("%lf %lf", &x, &y);

		printf("%.1lf\n", (y-x >= 0)?	y-x:-(y-x));
	}
}
