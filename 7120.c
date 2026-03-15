#include <stdio.h>

int main()
{
	char c, prev;

	prev=getchar();
	putchar(prev);

	while((c=getchar()) != '\n')
	{
		if(prev != c)
		{
			putchar(c);
			prev=c;
		}
	}
}
