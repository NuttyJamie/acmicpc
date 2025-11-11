#include <stdio.h>

int main()
{
	int r, c, n;

	scanf("%d %d %d", &r, &c, &n);

	printf("%lld", (long long)((r%n)?	r/n+1:r/n)*((c%n)?	c/n+1:c/n));
}
