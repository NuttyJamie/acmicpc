#include <stdio.h>

int main()
{
	struct rec
	{
		int x1, x2, y1, y2;
	}REC[10000];
	int n, i, j, w1, h1, w2, h2, total=0, pair=0;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%d %d %d %d", &REC[i].x1, &REC[i].y1, &REC[i].x2, &REC[i].y2);

	for(i=0; i < n-1; ++i)
	{
		w1=REC[i].x2-REC[i].x1;
		h1=REC[i].y2-REC[i].y1;
		for(j=i+1; j < n; ++j)
		{
			++total;
			w2=REC[j].x2-REC[j].x1;
			h2=REC[j].y2-REC[j].y1;

			if(((w1 <= w2) && (h1 <= h2)) ||
					((h2 <= w1) && (w2 <= h1)) ||
					((w2 <= w1) && (h2 <= h1)) ||
					((h1 <= w2) && (w1 <= h2)))
				++pair;
		}
	}

	printf("%d", total-pair);
}
