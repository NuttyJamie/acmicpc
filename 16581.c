#include <stdio.h>
#include <unistd.h>
#define N 600008

int main()
{
	char buf[N];
	char *c=buf;
	char o=0;

	ssize_t l=read(0, buf, N);

	while(*c++ != '\n');

	while(c < buf+l)
	{
		if(*c == 'L') o^=1;
		while(*c++ != '\n');
	}

	puts(o?	"LIE":"TRUTH");
}
