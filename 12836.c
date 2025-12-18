#include <stdio.h>

int main()
{
	long long day[10000];
	long long delta;
	int n, p, q, x, i, op;

	scanf("%d %d", &n, &q);

	for(i=0; i < n; ++i)	day[i]=0;

	for(i=0; i < q; ++i)
	{
		delta=0;
		scanf("%d %d %d", &op, &p, &x);

		if(op & 1)	day[p-1]+=x;
		else
		{
			for(--p; p < x; ++p)
				delta+=day[p];
			printf("%lld\n", delta);
		}
	}
}
