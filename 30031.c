#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[700];
	char *p=buf;
	int n, count=0;

	setbuf(stdin, NULL);
	scanf("%*d");
	ssize_t l=read(0, buf, 700);
	while(p < buf+l)
	{
		p+=2;

		switch(*p)
		{
			case '2':
				count+=5000;
				break;
			case '4':
				count+=50000;
				break;
			case '6':
				count+=1000;
				break;
			case '8':
				count+=10000;
				break;
		}
		p+=5;
	}
	printf("%d", count);
}
