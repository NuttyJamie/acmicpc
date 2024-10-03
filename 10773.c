#include <stdio.h>

int main()
{
	int k, i=0, sum=0;
	int n[100000];

	scanf("%d", &k);

	while(k--)
	{
		scanf("%d", &n[i]);
		if(!n[i])
		{
			sum-=n[--i];
			continue;
		}
		sum+=n[i++];
	}
	printf("%d", sum);
}
