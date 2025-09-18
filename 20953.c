#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 800007

int main()
{
	long long d, x;
	int a, b, t=0;
	char *buf=(char *)calloc(N, 1);
	char *wbuf=(char *)calloc(N, 1);
	char *r=buf, *w=wbuf;

	ssize_t l=read(0, buf, N);

	while(*r != '\n')
	{
		t*=10;
		t+=(*r-'0');
		++r;
	}

	++r;

	while(t--) 
	{
		a=b=0;

		while(*r != ' ')
		{
			a*=10;
			a+=(*r-'0');
			++r;
		}
		++r;

		while(*r != '\n')
		{
			b*=10;
			b+=(*r-'0');
			++r;
		}
		++r;

		x=(long long)(a+b)*(a+b)*(a+b-1)/2;

		for(d=1; d <= x/10; d*=10);
		while(d)
		{
			*w++=(char)(x/d+'0');
			x%=d;
			d/=10;
		}
		*w++='\n';
	}
	write(1, wbuf, w-wbuf);
}
