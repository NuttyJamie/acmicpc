#include <stdio.h>

int main()
{
	int x[1000]={0};
	int i, n, m;

	scanf("%d %d", &n, &m);

	while(n--)
	{
		scanf("%d", &i);

		++x[i-1];
	}

	for(i=0, n=0; i < m; ++i)
		if(n < x[i])	n=x[i];

	printf("%d", n);
}
