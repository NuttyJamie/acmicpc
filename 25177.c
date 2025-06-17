#include <stdio.h>

int main()
{
	int a[1000]={0};
	int b, n, m, i, max=0;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
		scanf("%d", &a[i]);

	for(i=0; i < m; ++i)
	{
		scanf("%d", &b);

		if((b-a[i] > 0) && (b-a[i] > max))
			max=b-a[i];
	}

	printf("%d", max);
}
