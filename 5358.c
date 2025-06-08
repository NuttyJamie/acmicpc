#include <stdio.h>

int main()
{
	char c;

	while((c=getchar()) != EOF)
	{
		if((c == 'e') || (c == 'E'))		c+=4;
		else if((c == 'i') || (c == 'I'))	c-=4;
		putchar(c);
	}
}
