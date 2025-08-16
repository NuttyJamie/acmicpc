#include <stdio.h>

int main()
{
	long long n, k, stamp=0, total=0;

	while(scanf("%lld %lld", &n, &k) != EOF)
	{
		while(n)
		{
			total+=n;
			
			stamp+=n;
			n=stamp/k;
			stamp%=k;
		}
		printf("%d\n", total);
		stamp=total=0;
	}
}
