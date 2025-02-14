#include <stdio.h>

int main()
{
	long long c;
	int k, d=1;

	scanf("%lld %d", &c, &k);

	if(!k)	printf("%lld", c);
	else
	{
		while(--k > 0)	d*=10;

		c/=d;
		k=c%10;
		if(k < 5)	c-=k;
		else		c+=10-k;
		printf("%lld", c*d);
	}
}
