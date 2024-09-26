#include <stdio.h>

int main()
{
	char buf;
	int count=7;

	scanf("%*6s");
	while((buf=getchar()) != ':')
		count+=(buf == '_')?	6:1;
	printf("%d", count+2);
}

