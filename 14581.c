#include <stdio.h>

int main()
{
	char w;
	
	puts(":fan::fan::fan:");
	printf(":fan::");

	while((w=getchar()) > '/')
		putchar(w);
	puts("::fan:");
	puts(":fan::fan::fan:");
}

