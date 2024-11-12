#include <stdio.h>

int main()
{
	int i, j, k, n;

	scanf("%d", &n);

	for(k=0; k < n; ++k)
	{
		for(j=0; j < k; ++j) 			putchar(' ');
		for(i=0; i < 2*(n-k)-1; ++i)	putchar('*');
		putchar('\n');
	}
	for(k=n-1; k; --k)
	{
		for(j=k-1; j; --j) 				putchar(' ');
		for(i=0; i < 2*(n-k)+1; ++i)	putchar('*');
		putchar('\n');
	}
}
