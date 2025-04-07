#include <stdio.h>

int main()
{
	int a[10]={0};
	int n, m, i;

	scanf("%d", &n);

	for(i=0; i < n; ++i)	scanf("%d", &a[i]);

	scanf("%d", &m);

	for(n=0; m; --m)
	{
		scanf("%d", &i);
		n+=a[i-1];
	}

	printf("%d", n);
}
