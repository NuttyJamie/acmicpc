#include <stdio.h>

int main()
{
	char c;
	int count=0;

	while((c=getchar()) != '\n')
	{
		if(	c == 'a'	||
			c == 'e'	||
			c == 'i'	||
			c == 'o'	||
			c == 'u')
			++count;
	}

	printf("%d", count);
}
