#include <stdio.h>

int main()
{
	int n=0, sum=0;
	char buf[601];
	char *p=fgets(buf, 601, stdin);

	while(*p != '\n')
	{
		if(*p == ' ')
		{
			sum+=n;
			n=0;
		}
		else
		{
			n*=10;
			n+=*p-'0';
		}
		++p;
	}
	printf("%d", sum+n);
}
