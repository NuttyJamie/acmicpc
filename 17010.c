#include <stdio.h>

int main()
{
	char c;
	int l, m;

	scanf("%d", &l);

	while(l--)
	{
		scanf("%d %c", &m, &c);
		while(m--)	putchar(c);
		putchar('\n');
	}
}
