#include <stdio.h>

int main()
{
	int a, b, x, y;
	
	scanf("%d %d %d %d", &a, &b, &x, &y);

	if(a != 0 && b != 0)	
		putchar('2');
	else if((a == 0 && x == 0 && y < b) || (b == 0 && y == 0 && x < a))
		putchar('3');
	else
		putchar('1');
}
