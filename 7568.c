#include <stdio.h>


int main()
{
	struct bulk { int x, y, rank; };
	int n, i;
	struct bulk bulk[50]={[0 ... 49] = {.rank=1}};

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%d %d", &bulk[i].x, &bulk[i].y);

	for(i=0; i < n; ++i)
		for(int j=0; j < n; ++j)
			if(i != j && bulk[j].x > bulk[i].x && bulk[j].y > bulk[i].y)
				++bulk[i].rank;
	for(i=0; i < n; ++i)
		printf("%d ", bulk[i].rank);
}
