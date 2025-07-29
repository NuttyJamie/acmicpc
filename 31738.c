#include <stdio.h>

int main()
{
	unsigned long long n, m, x;

	scanf("%llu %llu", &n, &m);

	if(n >= m)	putchar('0');
	else
	{
		x=n--;

		while(n)
		{
			x%=m;
			x*=n--;
		}
		printf("%llu", x);
	}
}
