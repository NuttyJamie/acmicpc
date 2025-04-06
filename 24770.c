#include <stdio.h>

int main()
{
	int n, m, a, b, i;

	while(1)
	{
		scanf("%d %d", &n, &m);

		if(!n)	break;

		double ratio, best=0;
		int a_best=0, b_best=0;

		for(i=0; i < n; ++i)
		{
			scanf("%d %d", &a, &b);
			if(a > m)	continue;
			ratio=(double)a/b;
			if(best == ratio)
			{
				if(a_best < a)	a_best=a, b_best=b;
				else			continue;
			}
			else if(!best || (best < ratio))
			{
				best=ratio;
				a_best=a;
				b_best=b;
			}
		}
		if(best)	printf("Buy %d tickets for $%d\n", a_best, b_best);
		else		puts("No suitable tickets offered");
	}
}
