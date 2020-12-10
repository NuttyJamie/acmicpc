#include <stdio.h>

int main()
{
	int n, i, j, count;
	int num[123456*2]={0,};

	for(i=2; i<=123456*2; ++i)
	{
		if(num[i-1]==-1)	continue;
		for(j=1; i*j<=123456*2; ++j)
		{
			if(j==1)	num[i-1]=1;
			else		num[i*j-1]=-1;
		}
	}

	for(;;)
	{
		count=0;
		scanf("%d", &n);

		if(n==0)	break;

		for(i=n+1; i<=n*2; ++i)
		{
			if(num[i-1]==1) ++count;
		}
		printf("%d\n", count);
	}
}

