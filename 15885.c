#include <stdio.h>

int main()
{
	double a, b;

	scanf("%lf %lf", &a, &b);

	printf("%d", (int)(((a/b-1 > 0)?	a/b-1:-(a/b-1))*2));
}
