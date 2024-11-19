#include <stdio.h>

int main()
{
	long long a, b, t;

	scanf("%lld %lld", &a, &b);
	if(a > b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("%d\n", (a == b)? 0:b-a-1);
	while(++a < b)	printf("%lld ", a);
}
