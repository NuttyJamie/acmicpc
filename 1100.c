#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[73];
	char* p=buf;
	char flag=0, count=0;

	ssize_t l=read(0, buf, sizeof(buf));

	while(p < buf+l)
	{
		if(!flag && (*p == 'F'))	++count;
		flag^=1;
		++p;
	}
	printf("%d", count);
}
