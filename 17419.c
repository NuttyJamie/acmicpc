#include <stdio.h>

int main()
{
	int count=0;
	char k[1000002];
	char *c=k;

	scanf("%*d %s", k);

	while(*c != '\0')	count+=(*c++ ^ '0');

	printf("%d", count);
}
