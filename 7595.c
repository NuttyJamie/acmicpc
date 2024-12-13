#include <stdio.h>

int main()
{
	int i, j, n;

	while(1)
	{
		scanf("%d", &n);
		if(!n)	break;
		for(j=0; j < n; ++j)
		{
			for(i=0; i <= j; ++i)
				putchar('*');
			putchar('\n');
		}
	}
}
