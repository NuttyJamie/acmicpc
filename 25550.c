#include <stdio.h>

int main()
{
	int grid[1000][1000];
	int i, j, n=0, m=0;
	long long total=0;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
		for(j=0; j < m; ++j)
			scanf("%d", &grid[i][j]);

	--n,--m;

	for(i=1; i < n; ++i)
	{
		for(j=1; j < m; ++j)
		{
			int min=grid[i-1][j];

			if(grid[i+1][j] < min) min=grid[i+1][j];
			if(grid[i][j+1] < min) min=grid[i][j+1];
			if(grid[i][j-1] < min) min=grid[i][j-1];

			if(min < grid[i][j]) 	total+=min;
			else if(grid[i][j])		total+=grid[i][j]-1;
		}
	}
			
	printf("%lld", total);
}
