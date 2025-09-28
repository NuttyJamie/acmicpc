#include <stdio.h>

int main()
{
	int n, m, i, g;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		printf("Case %d:\n", i+1);

		scanf("%d", &m);

		while(m--)
		{
			scanf("%d", &g);

			if(g > 5)	continue;
			else		printf("%d\n", g+1);
		}
	}
}
