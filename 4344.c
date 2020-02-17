#include <stdio.h>

int main()
{
	int testCase, N, i, j, overavg, sum;
	int score[1000];

	scanf("%d", &testCase);

	for(i=0; i<testCase; ++i)
	{
		sum=0;
		overavg=0;
		scanf("%d", &N);
		for(j=0; j<N; ++j)
		{
			scanf("%d", &score[j]);
			sum+=score[j];
		}
		for(j=0; j<N; ++j)
		{
			if(score[j]>sum/N)	overavg++;
		}
		printf("%.3lf%%\n", (double) overavg/N*100);
	}
}
