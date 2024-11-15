#include <stdio.h>

int main()
{
	unsigned long long a, b, c;

	scanf("%llu %llu %llu", &a, &b, &c);

	if(a < b && a < c)
	{
		if(b < c)	a=b;
		else		a=c;
	}
	else if(b < a && b < c)
	{
		if(c < a)	a=c;
	}
	else
	{
		if(a > b)	a=b;
	}

	printf("%llu", a);
}
