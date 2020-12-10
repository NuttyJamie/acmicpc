#include <stdio.h>

int main()
{
	int T, n, i, j;
	int num[10000]={0,};

	for(i=2; i<=10000; ++i)
	{
		if(num[i-1]==-1)	continue;
		for(j=1; i*j<10000; ++j)
		{
			if(j==1)	num[i-1]=1;
			else		num[i*j-1]=-1;
		}
	}

	scanf("%d", &T);

	for(T; T>0; --T)
	{
		scanf("%d", &n);

		for(i=n/2; i>=2; --i)
		{
			if(num[i-1]==-1)	continue;
			for(j=n/2; j<n; ++j)
			{
				if(num[j-1]==-1)	continue;
				else if(i+j == n)
				{
					printf("%d %d\n", i, j);
					i=1;
					break;
				}
			}
		}
	}
}		
