#include <stdio.h>

int main()
{
	int n, i, j, k; 

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		for(j=0; j < n-i-1; ++j)	putchar(' ');
		for(k=0; k < n+i-j; ++k)	putchar('*');
		putchar('\n');
	}
	
	for(i=0; i < n-1; ++i)
	{
		for(j=0; j < i+1; ++j)		putchar(' ');
		for(k=0; k < 2*(n-1)-i-j; ++k)	putchar('*');
		putchar('\n');
	}
}

