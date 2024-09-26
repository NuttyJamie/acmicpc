#include <stdio.h>

int main()
{
	int p1, p2, p3, p4, x;

	scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &x);

	if	   (p1 == x) putchar('1');
	else if(p2 == x) putchar('2');
	else if(p3 == x) putchar('3');
	else if(p4 == x) putchar('4');
	else			 putchar('0');
}
