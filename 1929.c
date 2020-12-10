#include <stdio.h>

int main()
{
	int M, N, i, j;
	int num[1000001]={0,};

	scanf("%d%d", &M, &N);

	for(i=2; i<=N; ++i)
	{
		if(num[i]==-1)	continue;
		for(j=1; i*j<=N; ++j)
		{
			if(j==1)	num[i]=1;
			else		num[i*j]=-1;
		}
	}

	while(M<=N)
	{
		if(num[M]==1)	printf("%d\n", M);
		++M;
	}
}
