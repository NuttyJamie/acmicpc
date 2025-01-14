#include <stdio.h>

int main()
{
	int l, a, b, c, d;

	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

	a=(a%c)?	a/c+1:a/c;
	b=(b%d)?	b/d+1:b/d;
	printf("%d", l-((a > b)?	a:b));
}
