#include <stdio.h>

int main()
{
	int T, k, n, i, j, t;	
	int num[14]={1};
			
	scanf("%d", &T);

	for(t=0; t<T; ++t)
	{
		scanf("%d%d", &k, &n);

		for(j=0; j<=k; ++j)
		{
			for(i=1; i<n; ++i)
			{
				if(j==0) num[i]=i+1;
				else	 num[i]+=num[i-1];
			}
		}
		printf("%d\n", num[n-1]);
	}
}

