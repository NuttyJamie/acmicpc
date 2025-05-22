#include <stdio.h>

int main()
{
	int i, n;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		for(int j=0; j < n*5; ++j)
			putchar('@');
		putchar('\n');
	}

	for(i=0; i < n*4; ++i)
	{
		for(int j=0; j < n; ++j)
			putchar('@');
		putchar('\n');
	}
}
