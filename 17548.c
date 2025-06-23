#include <stdio.h>

int main()
{
	char str[1001];
	int i=0;

	scanf("%s", str);

	while(str[i] != '\0')	++i;

	i-=2;
	i<<=1;

	putchar('h');
	while(i--)	putchar('e');
	putchar('y');
}
