#include <stdio.h>

int main()
{
	int n, a, b, x;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d %d", &a, &b, &x);

		printf("%d\n", --x*a+b);
	}
}
