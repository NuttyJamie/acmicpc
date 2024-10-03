#include <stdio.h>

int main()
{
	int a, b, gcd, lcm, tmp;

	scanf("%d %d", &a, &b);

	lcm=a*b;
	if(a < b)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	while(tmp=a%b)
	{
		a=b;
		b=tmp;
	}
	gcd=b;
	lcm/=gcd;
	printf("%d\n%d", gcd, lcm);
}
