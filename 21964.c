#include <stdio.h>

int main()
{
	char s;
	int n;

	scanf("%d ", &n);
	while(n-- > 5)	getchar();
	++n;
	while(n--)	putchar(getchar());
}
