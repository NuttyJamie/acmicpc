#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[200002];
	char *p=buf;
	char flag=0;

	setbuf(stdin, NULL);
	scanf("%*d");

	ssize_t l=read(0, buf, sizeof(buf));
	--l;

	while(p < buf+l)
	{
		if(*p != 'A' && *p != 'J' && *p != 'V')
		{
			flag=1;
			putchar(*p);
		}
		++p;
	}
	if(!flag)	puts("nojava");
}
