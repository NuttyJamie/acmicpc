#include <stdio.h>

int main()
{
	int n, d, m, p;

	p=m=1;

	scanf("%d %d", &n, &d);

	puts("+---------------------+");

	while(m <= n)
	{
		putchar('|');
		if(m == 1)	while(p < d)	printf("..."), ++p;

		while(p < 8 && m <= n)
		{
			printf("%s%d", ((m < 10)?	"..":"."), m);
			++m;
			++p;
		}
		if(p == 8)	p=1;
		else		while(p++ < 8)	printf("...");

		putchar('|');
		putchar('\n');
	}

	printf("+---------------------+");
}
