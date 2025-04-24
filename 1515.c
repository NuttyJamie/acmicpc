#include <stdio.h>

int main()
{
	int t, n=0, d=1000, l=0;
	char buf[3001];
	char *p=buf;

	scanf("%s", buf);

	while(*p != '\0')	++l, ++p;
	p=buf;

	while(p < buf+l)
	{
		++n;
		t=n;
		d=10000;
		while(!(t/d))	d/=10;
		while(d)
		{
			if(*p-'0' == t/d)
				++p;
			t%=d;
			d/=10;
		}
	}

	printf("%d", n);
}
