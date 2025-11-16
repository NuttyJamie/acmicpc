#include <stdio.h>

int main()
{
	char c;

	putchar(getchar());

	while((c=getchar()) != '\n')
		if(c == '-')	putchar(getchar());
}
