#include <stdio.h>

int main()
{
	int a[10000];
	int n, k, i, j;

	scanf("%d %d", &n, &k);

	for(i=0; i < n; ++i)
		scanf("%d", &a[i]);

	for(j=n; j > 1; --j)
	{
		for(i=0; i < j-1; ++i)
		{
			if(a[i] > a[i+1])
			{
				a[i]^=a[i+1];
				a[i+1]^=a[i];
				a[i]^=a[i+1];
				--k;
			}
			if(!k)	break;
		}
		if(!k)	break;
	}

	if(!k)
	{
		for(i=0; i < n; ++i)
			printf("%d ", a[i]);
	}
	else printf("-1");
}
