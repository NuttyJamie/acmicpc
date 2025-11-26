#include <stdio.h>

int main()
{
	int circle[1000];
	int n, k, i, count, gap;

	scanf("%d %d", &n, &k);

	count=n;
	gap=--k;

	for(i=0; i < n; ++i) circle[i]=1;

	putchar('<');
	
	for(i=0; count; ++i)
	{
		if(i == n)	i=0;

		if(circle[i] && !gap)
		{
			if(count != 1) 	printf("%d, ", i+1);
			else			printf("%d>", i+1);
			circle[i]=0;
			--count;
			gap=k;
		}
		else if(circle[i]) --gap;
	}
}
