#include <stdio.h>

int main()
{
	int a=0, b=0;

	while(getchar() != '\n') ++a;
	while(getchar() != '\n') ++b;

	if(a >= b)	puts("go");
	else		puts("no");
}
