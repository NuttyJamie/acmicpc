#include <stdio.h>

int main()
{
	long long k, n, x;

	scanf("%lld %lld", &k, &n);
	
	if(n == 1)	puts("-1");
	else
	{
		x=k*n/(n-1);
		printf("%lld", (k*n%(n-1))? x+1:x);
	}
}
