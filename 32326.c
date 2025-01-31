#include <stdio.h>

int main()
{
	int r, g, b;

	scanf("%d %d %d", &r, &g, &b);
	printf("%d", r*3+(g<<2)+b*5);
}
