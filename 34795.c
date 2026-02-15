#include <stdio.h>

int main()
{
	int m, d;

	scanf("%d %d", &m, &d);

	printf("%d", d/m+((d%m)? 1:0));
}