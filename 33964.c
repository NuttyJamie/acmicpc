#include <stdio.h>

int main()
{
	int x, y, i=1, j=1;

	scanf("%d %d", &x, &y);

	while(--x)
	{
		i*=10;
		++i;
	}

	while(--y)
	{
		j*=10;
		++j;
	}

	printf("%d", i+j);
}
