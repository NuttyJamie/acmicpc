#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[120000]={0};
	char *c=buf, *q=buf;
	int n, p=1;

	setbuf(stdin, NULL);
	scanf("%*d");

	ssize_t l=read(0, buf, sizeof(buf));
	while(c < buf+l)
	{
		n=0;
		while(*c++ != ' ');
		while(*c != '\n')
		{
			n=(n<<3)+(n<<1);
			n+=*c-'0';
			++c;
		}

		printf("%d %d\n", p, (((n+1)*n)>>1)+n);
		++c, ++p;
	}
}
