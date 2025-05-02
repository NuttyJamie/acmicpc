#include <stdio.h>

int main()
{
	int t;
	long long a, b, correct, wrong=0;

	for(scanf("%d", &t); t; --t, wrong=0)
	{
		scanf("%lld %lld", &a, &b);

		correct=a*b;

		long long d=1;
		while(a && b)
		{
			wrong+=(a%10)*(b%10)*d;
			d*=((a%10)*(b%10) > 9)?	100:10;
			a/=10;
			b/=10;
		}

		if(a) 		wrong+=a*d;
		else if(b)	wrong+=b*d;

		putchar((correct == wrong)?	'1':'0');
		putchar('\n');
	}
}
