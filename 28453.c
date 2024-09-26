#include <stdio.h>

int main()
{
	int n, m;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &m);
		if	  (m == 300)	putchar('1');
		else if(m > 274)	putchar('2');
		else if(m > 249)	putchar('3');
		else 				putchar('4');
		putchar(' ');
	}
}


