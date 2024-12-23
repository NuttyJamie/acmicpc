#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if(n%2)			putchar('0');
	else if(!(n%4))	putchar('2');
	else			putchar('1');
}
