#include <stdio.h>

int main()
{
	char c;

	scanf("%*d ");

	while((c=getchar()) != '\n')
	{
		if(c == ' ')
			printf("DORO");
		putchar(c);
	}
	printf("DORO");
}
