#include <stdio.h>

int main()
{
	int t, n, i, j;

	scanf("%d", &t);

	while(t--)
	{
		int multiflag=0;

		scanf("%d", &n);

		printf("Pairs for %d: ", n);

		for(i=1; i <= n>>1; ++i)
		{
			for(j=i+1; j < n; ++j)
			{
				if(i+j == n)
				{
					if(multiflag)
						printf(", %d %d", i, j);
					else
						printf("%d %d", i, j);
					multiflag=1;
				}
			}
		}
		putchar('\n');
	}
}
