#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define R 5800000

int main()
{
	char *buf=(char *)malloc(R);
	char *p=buf;
	int n[200000]={0};
	int k, s;

	setbuf(stdin, NULL);
	scanf("%*d %*d");
	ssize_t l=read(0, buf, R);

	while(p < buf+l)
	{
		k=0;
		while(*p != ' ')
		{
			k*=10;
			k+=*p-'0';
			++p;
		}
		--k, ++p;

		s=0;
		while(*p != ' ')
		{
			s*=10;
			s+=*p-'0';
			++p;
		}
		++p;

		if(s >= n[k])
		{
			puts("YES");

			n[k]=0;
			while(*p > '\n')
			{
				n[k]*=10;
				n[k]+=*p-'0';
				++p;
			}
		}
		else
		{
			puts("NO");
			while(*p > '\n')	++p;
		}
		++p;
	}

	free(buf);
}
