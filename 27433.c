#include <stdio.h>

int main()
{
	int n;
	long long t=1;

	scanf("%d", &n);

	while(n)
	{
		t*=n;
		--n;
	}

	printf("%lld", t);
}
