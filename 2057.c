#include <stdio.h>
#define ull unsigned long long

int main()
{
	ull fac[21]=
	{
		1,
		1,
		2,
		6,
		24,
		120,
		720,
		5040,
		40320,
		362880,
		3628800,
		39916800,
		479001600,
		6227020800,
		87178291200,
		1307674368000,
		20922789888000,
		355687428096000,
		6402373705728000,
		121645100408832000,
		2432902008176640000,
	};
	ull n;

	scanf("%lld", &n);
	if(!n)
	{
		puts("NO");
		return 0;
	}
	int i=20;
	while(n)
	{
		while(n < fac[i])
		{
			if(i < 0)	break;
			--i;
		}
		if(i >= 0) 	n-=fac[i--];
		else		break;
	}
	puts((!n)?	"YES":"NO");
}
