#include <stdio.h>

int main()
{
	long long n, m, a, k;

	scanf("%lld %lld %lld %lld", &n, &m, &a, &k);

	printf("%lld %lld", (a-k+1 > n)?	n:a-k+1, (a-k+m-1)/m+1);
}
