#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d", ((c&1)?	a^b:a));
}
