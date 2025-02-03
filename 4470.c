#include <stdio.h>

int main()
{
	char c;
	int n, i=1;

	scanf("%d ", &n);

	while(i <= n)
	{
		printf("%d. ", i++);
		while((c=getchar()) != '\n')	putchar(c);
		putchar(c);
	}
}
