#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[1000001];
	char *p=buf;
	char err=0;
	int i=0;

	setvbuf(stdin, NULL, _IONBF, 0);
	scanf("%*d");
	ssize_t l=read(0, buf, sizeof(buf));

	while(1)
	{
		char* t=p;
		if(p >= buf+l)	break;
		while(*p++ != '\n') ++i;
		if(i != 7) err=1;
		else if(*t ^ *(t+1) ||
				*t ^ *(t+4) ||
				*(t+2) ^ *(t+3) ||
				*(t+5) ^ *(t+6) ||
				*(t+2) ^ *(t+5) ||
				*(t+1) == *(t+2))
			err=1;
		puts((err)?	"0":"1");
		i=0;
		err=0;
	}
}
