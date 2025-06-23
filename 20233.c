#include <stdio.h>

int main()
{
	int a, b, x, y, t;

	scanf("%d %d %d %d %d", &a, &x, &b, &y, &t);

	printf("%d %d", (t >= 30?	t-30:0)*x*21+a, (t >= 45?	t-45:0)*y*21+b);
}
