#include <stdio.h>

int main()
{
	int a, b, d;
	char sum[21];
	char *c=sum;

	scanf("%d %d", &a, &b);

	while(a || b)
	{
		d=a%10+b%10;

		if(!d)
		{
			*c='0';
			++c;
		}
		while(d)
		{
			*c=(d%10)+'0';
			++c;
			d/=10;
		}
		a/=10;
		b/=10;
	}

	while(c-- != sum)	putchar(*c);
}
