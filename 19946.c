#include <stdio.h>

int main()
{
	unsigned long long n;
	int i=0;

	scanf("%llu", &n);

	while(!(n & 1))
	{
		++i;
		n>>=1;
	}
	printf("%d", 64-i);
}
