#include <stdio.h>

int main()
{
	char c, prev=0;

	while((c=getchar()) != '*')
	{
		if(!prev)
		{
			if(c == ' ')	while((c=getchar()) == ' '){};
			prev=c;
		}
		if(c == '\n')
		{
			putchar('Y');
			putchar(c);
			prev=0;
		}
		else if(c == ' ')
		{
			while((c=getchar()) == ' '){};
			if(c == '\n')
			{
				putchar('Y');
				putchar(c);
				prev=0;
			}
			else if(prev != c && ((prev < c)? c-prev:prev-c) != 32)
			{
				putchar('N');
				while((c=getchar()) != '\n'){}
				putchar(c);
				prev=0;
			}
		}
	}
}
