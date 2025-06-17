#include <stdio.h>

int main()
{
	int n, d;

	scanf("%d ", &n);

	while(n--)
	{
		d=0;
		while(getchar() != '\n')	++d;
		printf("%d\n", d);
	}
}
