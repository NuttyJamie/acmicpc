#include <stdio.h>
#include <math.h>

int main()
{
	double l;
	int n;

	scanf("%d", &n);

	l=sqrt(n);
	printf("%d", (int)floor(l));
}
