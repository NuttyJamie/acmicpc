#include <stdio.h>

int main()
{
	int n, m, i, j, buf, a[100][100];

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
		for(j=0; j < m; ++j)
			scanf("%d", &a[i][j]);

	for(i=0; i < n; ++i)
	{
		for(j=0; j < m; ++j) 
		{
			scanf("%d", &buf);
			a[i][j]+=buf;
		}
	}

	for(i=0; i < n; ++i)
	{
		for(j=0; j < m; ++j) 
			printf("%d ", a[i][j]);
		putchar('\n');
	}
}
