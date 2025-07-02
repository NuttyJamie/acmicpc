#include <stdio.h>

int main()
{
	unsigned long long n;

	scanf("%lld", &n);

	n=(((n+1)*2)+(n+1)*(n-2))*(n-1)/2;
	printf("%lld", n);
}
