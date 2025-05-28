#include <stdio.h>

int main()
{
	int n, i, j;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		j=i;
		while(j)
		{
			putchar(' ');
			--j;
		}
		j=0;
		while(j < n-i)
		{
			putchar('*');
			++j;
		}
		putchar('\n');
	}
}
