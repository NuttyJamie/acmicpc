#include <stdio.h>

int main()
{
	char cur, prev=0, a=0, c=0;

	while((cur=getchar()) != '\n')
	{
		if(!prev || prev == '|')
		{
			if( cur == 'A' ||
				cur == 'D' || 
				cur == 'E')
				++a;
			else if(cur == 'C' || 
					cur == 'F' || 
					cur == 'G')	
				++c;
		}
		prev=cur;
	}
	if(a == c)
	{
		if( prev == 'A' ||
			prev == 'D' ||
			prev == 'E')
				puts("A-minor");
		else	puts("C-major");
		return 0;
	}
	puts((a > c)?	"A-minor":"C-major");
}
