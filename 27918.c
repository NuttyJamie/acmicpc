#include <stdio.h>
#include <unistd.h>
#define N 200007

int main()
{
	char buf[N]={0};
	char *c=buf;
	int n=0, d=0, p=0;

	ssize_t l=read(0, buf, N);

	while(*c != '\n')
	{
		n=(n<<3)+(n<<1);
		n+=*c-'0';
		++c;
	}
	++c;
	while(n--)
	{
		if(*c == 'D') 	++d;
		else			++p;
		c+=2;
		if(d-p > 1 || p-d > 1)	break;
	}
	printf("%d:%d", d, p);
	free(buf);
}
