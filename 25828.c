#include <stdio.h>

int main()
{
	int g, p, t;

	scanf("%d %d %d", &g, &p, &t);

	if(g*p == p*t+g)	putchar('0');
	else 				putchar((g*p < p*t+g)?	'1':'2');
}
