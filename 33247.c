#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFSIZE 25000000

int main()
{
	char* buf=(char *)malloc(sizeof(char)*BUFSIZE);
	char *c=buf;
	int i=0, p=0, m=0, flag=0, prev=-1;
	long long money=0;

	setbuf(stdin, NULL);
	scanf("%*d");
	ssize_t l=read(0, buf, BUFSIZE);
	buf[l]='\n';
	while(c < buf+l)
	{
		while(*c != ' ')
		{
			i=(i<<3)+(i<<1);
			i+=*c-'0';
			++c;
		}
		++c;
		while(*c != ' ') 
		{
			p=(p<<3)+(p<<1);
			p+=*c-'0';
			++c;
		}
		if((prev < 0 && p) || ((prev != p) && prev > 0))
		{
			flag=1;
			break;
		}
		prev=i;
		++c;
		int withdraw=0;
		while(*c != '\n')
		{
			if(*c == '-') withdraw=1;
			else
			{
				m=(m<<3)+(m<<1);
				m+=*c-'0';
			}
			++c;
		}
		if(withdraw)	m*=-1;
		++c;
		money+=m;
		if(money < 0) break;
		i=0;
		p=0;
		m=0;
	}
	if(flag)			puts("INVALID");
	else if(money < 0)	puts("NO_MONEY");
	else				printf("%lld", money);
	free(buf);
}
