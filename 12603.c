#include <stdio.h>

int main()
{
	int p[100];
	int c, n, i, t, k;

	scanf("%d", &n);

	for(int ord=1; ord <= n; ++ord)
	{
		int tmax, kmax, max=0;

		scanf("%d %d", &c, &i);

		for(t=0; t < i; ++t)
			scanf("%d", &p[t]);

		for(t=0; t < i-1; ++t)
			for(k=t+1; k < i; ++k)
			{
				if((!max || max < p[t]+p[k]) && p[t]+p[k] <= c)
				{
					max=p[t]+p[k];
					tmax=t;
					kmax=k;
				}
			}
		printf("Case #%d: %d %d\n", ord, tmax+1, kmax+1);
	}
}
