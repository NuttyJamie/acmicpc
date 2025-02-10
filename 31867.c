#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[1000009];
	char *p=buf;
	int n=0, odd=0;

	read(0, buf, sizeof(buf));

	while(*p != '\n')
	{
		n=(n<<3)+(n<<1);
		n+=*p-'0';
		++p;
	}
	++p;
	while(*p != '\n')
		if(*p++ & 1)	++odd;
	odd<<=1;
	if(odd == n)	printf("-1");
	else			putchar((odd < n)?	'0':'1');
}

