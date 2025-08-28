#include <stdio.h>

int main()
{
	int map[50][50];
	int t, row, col, x, y, i, j;

	scanf("%d", &t);

	while(t--)
	{
		int count=0;
		scanf("%d %d %d %d", &col, &row, &x, &y);

		for(i=0; i < row; ++i)
			for(j=0; j < col; ++j)
				map[i][j]=1;

		for(i=0; i < row; ++i)
		{
			for(j=0; j < col; ++j)
				if(i+y < row && j+x < col && map[i][j])	map[i+y][j+x]=0;
		}
		for(i=0; i < row; ++i)
			for(j=0; j < col; ++j)
				if(map[i][j])	++count;
		printf("%d\n", count);
	}
}
