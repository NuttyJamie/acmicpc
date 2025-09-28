#include <stdio.h>

int main()
{
	int a=0, b=0, gamescore=0;
	char p;

	while((p=getchar()) != '\n')
	{
		if(p == 'A')	++a;
		else			++b;
		if(a == 21 || b == 21)
		{
			printf("%d-%d\n", a, b);
			gamescore+=(a == 21)? 1:-1;
			a=b=0;
		}
	}
	if(gamescore > 0) 	putchar('A');
	else				putchar('B');
}
