#include <stdio.h>

int main()
{
	char c;
	int n;

	scanf("%d ", &n);

	while(n--)
	{
		while((c=getchar()) != '\n')
			putchar((c < 'a')?	c+32:c);
		putchar('\n');
	}
}
