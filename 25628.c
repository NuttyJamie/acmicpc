#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	a>>=1;
	printf("%d", (a < b)? a:b);
}
