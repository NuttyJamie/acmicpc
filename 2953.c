#include <stdio.h>

int main()
{
	int sum[5]={0};
	int score, i, j, max=0, mx_ord=0;

	for(i=0; i < 5; ++i)
	{
		for(j=0; j < 4; ++j)
		{
			scanf("%d", &score);
			
			sum[i]+=score;
		}
	}

	for(i=0; i < 5; ++i)
	{
		if(max < sum[i])
		{
			max=sum[i];
			mx_ord=i;
		}
	}

	printf("%d %d", mx_ord+1, max);
}
