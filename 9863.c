#include <stdio.h>

int main()
{
	int caller[200];
	int n, m, k, i, j;

	while(1)
	{
		scanf("%d %d %d", &n, &m, &k);

		if(!n)	break;

		for(i=0; i < n; ++i)	caller[i]=1;

		--k;
		i=0;
		j=m-1;

		while(k+1)
		{
			if(i >= n)
			{
				i=0;
				continue;
			}

			if(caller[i])
			{
				if(!j)
				{
					caller[i]=0;
					--k;
					j=m-1;
				}
				else	--j;
			}
			++i;
		}

		printf("%d\n", i);
	}
}

