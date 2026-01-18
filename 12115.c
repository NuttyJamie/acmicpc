#include <stdio.h>

int main()
{
	int a[1000][1000], b[1000];
	int n, m, q, i, j, x;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
		for(j=0; j < m; ++j)
			scanf("%d", &a[i][j]);

	scanf("%d", &q);

	while(q--)
	{
		for(j=0; j < m; ++j)
			scanf("%d", &b[j]);

		x=0;

		for(i=0; i < n; ++i)
		{
			for(j=0; j < m; ++j)
			{
				if(b[j] < 0)	continue;
				else if(b[j] != a[i][j])
					break;
			}
			if(j == m)	++x;
		}
		printf("%d\n", x);
	}
}
