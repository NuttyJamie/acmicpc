#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	a=a+d-b-c;
	printf("%d", (a > 0)?	a:-a);
}
