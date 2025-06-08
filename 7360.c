#include <stdio.h>

int main()
{
	int a[20], b[20];
	int n, i, score_a=0, score_b=0;

	while(1)
	{
		scanf("%d", &n);
		if(!n)	break;

		for(i=0; i < n; ++i)
			scanf("%d", &a[i]);
		for(i=0; i < n; ++i)
			scanf("%d", &b[i]);

		for(i=0; i < n; ++i)
		{
			int gap=a[i]-b[i];
			if(gap < 0) gap*=-1;

			if(!gap)	continue;
			else if(gap == 1)
			{
				if(a[i] < b[i])	score_a+=((a[i]+b[i]) == 3)?	6:(a[i]+b[i]);
				else			score_b+=((a[i]+b[i]) == 3)?	6:(a[i]+b[i]);
			}
			else
			{
				if(b[i] < a[i])	score_a+=a[i];
				else			score_b+=b[i];
			}
		}
		printf("A has %d points. B has %d points.\n\n", score_a, score_b);
		score_a=score_b=0;
	}
}
