#include <stdio.h>

int main()
{
	long long n, m, s;

	scanf("%lld %lld %lld", &n, &m, &s);

	n=(m+1)*s*(100-n)/100;

	printf("%lld", (n < m*s)?	n:m*s);
}
