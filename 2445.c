#include <stdio.h>

int main()
{
	int n, i, j;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		for(j=0; j <= i; ++j)	putchar('*');
		while(j++ < 2*n-(i+1))	putchar(' ');
		for(j=0; j <= i; ++j)	putchar('*');
		putchar('\n');
	}
	--i;
	while(i--)
	{
		for(j=0; j <= i; ++j)	putchar('*');
		while(j++ < 2*n-(i+1))	putchar(' ');
		for(j=0; j <= i; ++j)	putchar('*');
		putchar('\n');
	}
}
