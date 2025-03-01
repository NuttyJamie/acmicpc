#include <stdio.h>

int main()
{
	char c, prev=0;
	int n;

	scanf("%d ", &n);
	while(n--)
	{
		putchar(((c=getchar()) > 'Z')?	c-32:c);
		while((c=getchar()) != '\n')	putchar(c);
		putchar(c);
	}
}
