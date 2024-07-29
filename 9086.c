#include <stdio.h>

int main()
{
	char t, current, last=-1;

	scanf("%d", &t);
	getchar();

	while(t > 0)
	{
		while((current=getchar()) != '\n')
		{
			if(last == -1)	putchar(current);
			last=current;
		}
		printf("%c\n", last);
		last=-1;
		--t;
	}
}
