#include <stdio.h>

int main()
{
	long long a, b;

	scanf("%lld %lld", &a, &b);
	printf("%lld", (b+1)*((a-2)*b+2)>>1);
}
