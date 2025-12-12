#include <stdio.h>

int main()
{
	int n, i, j, k;

	scanf("%d", &n);

	for(i=n; i; --i)
	{
		j=i-1;
		k=n-j;
		while(j--) putchar(' ');
		while(k--) putchar('*');
		putchar('\n');
	}

	for(i=n-1; i; --i)
	{
		j=n-i;
		k=i;
		while(j--) putchar(' ');
		while(k--) putchar('*');
		putchar('\n');
	}
}
