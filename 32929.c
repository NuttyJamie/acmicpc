#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);

	switch(x%3)
	{
		case 0:	putchar('S'); break;
		case 1:	putchar('U'); break;
		case 2:	putchar('O'); break;
	}
}
