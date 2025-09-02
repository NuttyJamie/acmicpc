#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 5000010

int main()
{
	long long total=0;
	int n, t=0;
	char *buf=(char *)calloc(N, sizeof(char));
	char *c=buf;

	ssize_t l=read(0, buf, N);
	buf[l-1]='\0';

	while(*c++ != '\n');

	while(*c != '\0')
	{
		if(*c < 'A')
		{
			t*=10;
			t+=*c-'0';
		}
		else total+=t, t=0;
		++c;
	}
	printf("%lld", total+t);
	free(buf);
}
