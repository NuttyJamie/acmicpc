#include <stdio.h>
#include <unistd.h>
#define N 1300007

int main()
{
	int fruits[4]={0, 0, 0, 0};
	int i;
	char buf[N];
	char *c=buf;

	ssize_t l=read(0, buf, N);

	while(*c++ != '\n');

	while(c < buf+l)
	{
		switch(*c)
		{
			case 'S':	i=0;break;
			case 'B':	i=1;break;
			case 'L':	i=2;break;
			case 'P':	i=3;break;
		}
		while(*c++ != ' ');
		fruits[i]+=(*c-'0');
		++c;
		if(*c == '\n') ++c;
	}

	if(!(fruits[0] ^ 5) ||
			!(fruits[1] ^ 5) ||
			!(fruits[2] ^ 5) ||
			!(fruits[3] ^ 5))
		write(1, "YES\n", 4);
	else	write(1, "NO\n", 3);
}
