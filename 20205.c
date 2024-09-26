#include <stdio.h>

int main()
{
	char p[100]={0};
	int h, i, j, n, k;

	scanf("%d %d ", &n, &k);

	for(h=0; h < n; ++h)
	{
		for(i=0; i < n*k; i+=k)
		{
			p[i]=getchar();
			p[i]=(p[i] < '0')?	getchar():p[i];
			for(j=1; j < k; ++j)
				p[i+j]=p[i];
		}
		for(j=0; j < k; ++j)
		{
			for(i=0; i < n*k; ++i)
			{
				putchar(p[i]);
				putchar(' ');
			}
			putchar('\n');
		}
	}
}
