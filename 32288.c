#include <stdio.h>

int main()
{
	char buf[502]={0};
	char *p=buf;

	scanf("%*d ");
	fgets(buf, 502, stdin);

	while(*p != '\n')	
	{
		putchar((*p < 'a')?	*p+32:*p-32);
		++p;
	}
}
