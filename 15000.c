#include <stdio.h>
#include <unistd.h>
#define N 1000001

int main()
{
	char s[N]={0};
	char *p=s;

	ssize_t l=read(0, s, N);

	while(p < s+l-1)
	{
		*p-=32;
		++p;
	}

	write(1, s, l);
}
