#include <stdio.h>

int main()
{
	long long p, q, x;

	scanf("%lld%lld%lld", &p, &q, &x);
	p*=x;
	scanf("%lld", &x);
	q*=x<<1;
	putchar((p%q)?	'0':'1');
}
