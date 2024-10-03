#include <stdio.h>

int main()
{
	int d, i, n, k;

	scanf("%d %d", &n, &k);
	for(i=1, d=2; d <= n-k; ++d)
		i*=d;
	for(d=1; n > k; --n)
		d*=n;
	printf("%d", d/i);
}
