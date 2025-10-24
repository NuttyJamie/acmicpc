#include <stdio.h>

int main()
{
	int n, a, b, d, h, t;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &a, &b);

		for(d=100000000; a < d; d/=10);
		for(h=1, t=0; d; d/=10, h*=10)
		{
			t+=a/d*h;
			a%=d;
		}
		a=t;

		for(d=100000000; b < d; d/=10);
		for(h=1, t=0; d; d/=10, h*=10)
		{
			t+=b/d*h;
			b%=d;
		}
		b=t;

		a+=b;
		for(d=100000000; a < d; d/=10);
		for(h=1, t=0; d; d/=10, h*=10)
		{
			t+=a/d*h;
			a%=d;
		}
		a=t;
		printf("%d\n", a);
	}
}
