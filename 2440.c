#include <stdio.h>

int main()
{
	int i, n;

	scanf("%d", &n);

	while(n--)
	{
		for(i=0; i <= n; ++i)
			putchar('*');
		putchar('\n');
	}
}
