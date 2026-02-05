#include <stdio.h>

int main()
{
	int t, n, x, sum=0;

	scanf("%d", &t);

	while(t--)
	{
		sum=0;

		scanf("%d", &n);

		while(n--)
		{
			scanf("%d", &x);
			sum+=x;
		}
		printf("%d\n", sum);
	}
}
