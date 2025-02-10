#include <stdio.h>

int main()
{
	int a, b, c;

	while(scanf("%d %d %d", &a, &b, &c) != EOF)
		printf("%d\n", ((b-a) < (c-b))?	c-b-1:b-a-1);
}
