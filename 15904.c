#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[1001], ucpc[]="UCPC";
	char *c=buf, *p=ucpc;
	int i;

	setbuf(stdin, NULL);

	ssize_t l=read(0, buf, 1001);
	buf[l-1]='\0';

	while(*c != '\0' && *p != '\0')
	{
		if(*c == *p)	++p;
		++c;
	}
	puts((*p)?	"I hate UCPC":"I love UCPC");
}
