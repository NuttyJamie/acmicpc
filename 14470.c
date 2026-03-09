#include <stdio.h>

int main()
{
	int a, b, c, d, e;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("%d", ((a < 0)? a*-1*c+e*b+d:(b-a)*e));
}
