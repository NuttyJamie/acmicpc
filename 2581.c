#include <stdio.h>

int main()
{
	int M, N, i, sum=0, min=-1;

	scanf("%d%d", &M, &N);

	for(M; M<=N; ++M)
	{
		if(M==1)	continue;
		if(M<4)	 
		{
			sum+=M;
			if(min==-1)	min=M;
		}
		for(i=2; i<=M/2; ++i)
		{
			if(M%i==0)	break;
			if(i==M/2)	 
			{
				sum+=M;
				if(min==-1)	min=M;
			}
		}
	}

	if(sum==0)	printf("%d", min);
	else		printf("%d\n%d", sum, min);
}
