#include <stdio.h>

int main()
{
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	if( x > 0 && y > 0)			putchar('1');
	else if( x < 0 && y > 0)	putchar('2');
	else if( x < 0 && y < 0)	putchar('3'); 
	else						putchar('4');
}
