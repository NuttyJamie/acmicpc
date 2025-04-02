#include <stdio.h>
#include <io.h>

int main()
{
	char buf[203]={0};
	char *p=buf;

	ssize_t l=read(0, buf, sizeof(buf));

