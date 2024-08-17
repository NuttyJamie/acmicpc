#include <stdio.h>
#include <stdlib.h>

int main()
{
	char n[30];
	int b, i;

	scanf("%s %d", n, &b);

	printf("%d", strtol(n, NULL, b));
}
