#include <stdio.h>

int main()
{
	char b=0, c;
	int n;

	scanf("%d ", &n);
	while((c=getchar()) != EOF)
	{
		if(c == '\n' && b != '.')	putchar('.');
		putchar(c);
		b=c;
	}
}
