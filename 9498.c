#include <stdio.h>

int main()
{
	int score;

	scanf("%d", &score);
	if(90<=score)
		putchar('A');
	else if(80<=score && score<=89)
		putchar('B');
	else if(70<=score && score<=79)
		putchar('C');
	else if(60<=score && score<=69)
		putchar('D');
	else
		putchar('F');
}

