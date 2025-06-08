#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	switch(n)
	{
		case 0:
		case 1:
			putchar('1');
			break;
		case 2:
			putchar('2');
			break;
		case 3:
			putchar('6');
			break;
		case 4:
			putchar('4');
			break;
		default:
			putchar('0');
			break;
	}
}
