#include <stdio.h>
#include <unistd.h>
#define N 100001

int main()
{
	char buf[N]={0};
	int consecutive=0;
	char *p=buf;

	setbuf(stdin, NULL);
	scanf("%*d");

	ssize_t l=read(0, buf, N);
	--l;

	while(consecutive != 3 && *p != '\0')
	{
		if(*p & 1)	++consecutive;
		else		consecutive=0;
		++p;
	}

	puts((consecutive == 3)?	"Yes":"No");
}
