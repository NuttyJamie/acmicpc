#include <stdio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for(j=0; j < n; ++j)
	{
		for(i=0; i < n; ++i)
			putchar('@');
		for(i=0; i < 3*n; ++i)
			putchar(' ');
		for(i=0; i < n; ++i)
			putchar('@');
		putchar('\n');
	}
	for(j=0; j < n; ++j)
	{
		for(i=0; i < n; ++i)
			putchar('@');
		for(i=0; i < 2*n; ++i)
			putchar(' ');
		for(i=0; i < n; ++i)
			putchar('@');
		putchar('\n');
	}
	for(j=0; j < n; ++j)
	{
		for(i=0; i < 3*n; ++i)
			putchar('@');
		putchar('\n');
	}
	for(j=0; j < n; ++j)
	{
		for(i=0; i < n; ++i)
			putchar('@');
		for(i=0; i < 2*n; ++i)
			putchar(' ');
		for(i=0; i < n; ++i)
			putchar('@');
		putchar('\n');
	}
	for(j=0; j < n; ++j)
	{
		for(i=0; i < n; ++i)
			putchar('@');
		for(i=0; i < 3*n; ++i)
			putchar(' ');
		for(i=0; i < n; ++i)
			putchar('@');
		putchar('\n');
	}
	putchar('\n');
}
