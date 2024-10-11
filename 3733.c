#include <stdio.h>

int main()
{
	int n, s;

	while(~scanf("%d %d", &n, &s))
		printf("%d\n", s/++n);
}
