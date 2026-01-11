#include <stdio.h>

int main()
{
	long long a[2000];
	int n, i;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%lld", &a[i]);

	while(n--)
	{
		for(i=0; i < n; ++i)
		{
			a[i]-=a[i+1];
			if(a[i] < 0)	a[i]*=-1;
		}
	}

	printf("%lld", a[0]);
}
