#include <stdio.h>

int main()
{
	int i, j, n, k, buf;
	int x[1000];

	scanf("%d %d", &n, &k);

	for(i=n-1; i >= 0; --i)
		scanf("%d", &x[i]);

	for(i=1; i < n; ++i)
	{
		buf=x[i];
		for(j=i-1; j >= 0; --j)
		{
			if(x[j] > buf)	x[j+1]=x[j];
			else
			{
				x[j+1]=buf;
				break;
			}
		}
		if(j == -1) x[0]=buf;
	}

	printf("%d", x[n-k]);
}
