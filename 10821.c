#include <stdio.h>

int main()
{
	int n=0;
	char s[101];
	char *p=s;

	scanf("%s", s);

	while(*p != '\0')
	{
		if(*p == ',')	++n;
		++p;
	}

	printf("%d", n+1);
}
