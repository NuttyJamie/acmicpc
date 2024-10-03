#include <stdio.h>

int main()
{
	char board[4][10];
	char shot[9];
	int i, j, k, xmin=-1, xmax=-1, ymin=-1, ymax=-1;

	scanf("%s %s %s %s %s", &board[0], &board[1], &board[2], &board[3], &shot);

	for(k=0; k < 9; ++k)
	{
		for(j=0; j < 4; ++j)
		{
			for(i=0; i < 10; ++i)
			{
				if(board[j][i] == shot[k])
				{
					xmin=(xmin > i || xmin < 0)?	i:xmin;
					xmax=(xmax < i || xmax < 0)?	i:xmax;
					ymin=(ymin > j || ymin < 0)?	j:ymin;
					ymax=(ymax < j || ymax < 0)?	j:ymax;
				}
			}
		}
	}
	printf("%c", board[(ymax+ymin)/2][(xmax+xmin)/2]);
}

