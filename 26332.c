#include <stdio.h>

int main()
{
	int n, c, p;

	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &c, &p);
		printf("%d %d\n%d\n", c, p, (c == 1)?	c*p:c*(p-2)+2);
	}
}
