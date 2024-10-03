#include <stdio.h>

int main()
{
	char s;
	int count=0;

	while((s=getchar()) != '#')
	{
		if(s == '\n')
		{
			printf("%d\n", count);
			count=0;
		}
		if(	s == 'A' ||	s == 'a' || 
			s == 'E' ||	s == 'e' ||
			s == 'I' ||	s == 'i' ||
			s == 'O' ||	s == 'o' ||
			s == 'U' ||	s == 'u')	count++;
	}
}
