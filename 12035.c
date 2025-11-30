#include <stdio.h>

int main()
{
	int dancer[10];
	int t, d, k, n, i, flag;

	scanf("%d", &t);

	for(int x=1; x <= t; ++x)
	{
		for(i=0; i < 10; ++i)	dancer[i]=i+1;
		flag=1;

		scanf("%d %d %d", &d, &k, &n);
		printf("Case #%d: ", x);

		while(n--)
		{
			if(flag)
			{
				for(i=0; i < d; i+=2)
				{
					dancer[i]^=dancer[i+1];
					dancer[i+1]^=dancer[i];
					dancer[i]^=dancer[i+1];
				}
			}
			else
			{
				dancer[0]^=dancer[d-1];
				dancer[d-1]^=dancer[0];
				dancer[0]^=dancer[d-1];
				for(i=1; i < d-2; i+=2)
				{
					dancer[i]^=dancer[i+1];
					dancer[i+1]^=dancer[i];
					dancer[i]^=dancer[i+1];
				}
			}
			flag=!flag;
		}
		for(flag=1, i=0; i < d; ++i)
		{
			if(dancer[i] == k)
			{
				if(i == 0)			printf("%d %d\n", dancer[1], dancer[d-1]);
				else if(i == d-1)	printf("%d %d\n", dancer[0], dancer[d-2]);
				else				printf("%d %d\n", dancer[i+1], dancer[i-1]);
				break;
			}
		}
	}
}
