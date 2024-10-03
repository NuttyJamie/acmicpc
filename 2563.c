#include <stdio.h>
#include <string.h>

int main()
{
	int paper[100][100]={0};
	int n, i, j, k, x, y;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		scanf("%d %d", &x, &y);
		for(j=x; j < x+10; ++j)
			for(k=y; k < y+10; ++k)
				paper[j][k]=1;
	}

	for(x=0, n=0; x < 100; ++x)
		for(y=0; y < 100; ++y)
			if(paper[x][y] == 1)	n++;
	printf("%d", n);
	//print map
	/*
	for(x=0; x < 100; ++x)
	{
		for(y=0; y < 100; ++y)
			printf("%d", paper[x][y]);
		putchar('\n');
	}
	*/
}
