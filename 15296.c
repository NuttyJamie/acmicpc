#include <stdio.h>

int ssd(int b, int n)
{
	int t, sum=0;

	while(n)
	{
		t=n%b;
		sum+=t*t;
		n/=b;
	}

	return sum;
}

int main()
{
	int p, k, b, n, i;

	scanf("%d", &p);

	for(i=1; i <= p; ++i)
	{
		scanf("%d %d %d", &k, &b, &n);

		b=ssd(b, n);
		printf("%d %d\n", k, b);
	}
}
