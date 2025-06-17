#include <stdio.h>

int main()
{
	int n, i, j;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		for(j=i; j < n-1; ++j)
			putchar(' ');
		for(j=0; j < i*2+1; ++j)
			putchar('*');
		putchar('\n');
	}
}
