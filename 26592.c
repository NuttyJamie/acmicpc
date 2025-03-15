#include <stdio.h>

int main()
{
	int n;
	double area, base;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%lf %lf", &area, &base);
		area*=2;

		printf("The height of the triangle is %.2lf units\n",\
				area/base);
	}
}
