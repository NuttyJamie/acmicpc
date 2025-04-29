#include <stdio.h>

int main()
{
	int h[500];
	int n, q, s, e, i;

	scanf("%d %d", &n, &q);

	for(i=0; i < n; ++i)
		scanf("%d", &h[i]);

	for(i=0; i < q; ++i)
	{
		int j, sum=0;
		scanf("%d %d", &s, &e);

		j=s-1;
		while(j < e)	sum+=h[j], ++j;
		printf("%d\n", sum);
	}
}
