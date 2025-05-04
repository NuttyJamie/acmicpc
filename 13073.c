#include <stdio.h>

int main()
{
	int t, n;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);

		printf("%d %d %d\n", n*(n+1)>>1, n*(n+1)-n, n*(n+1));
	}
}
