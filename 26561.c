#include <stdio.h>

int main()
{
	int n, p, t;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &p, &t);
		printf("%d\n", p+(t/4)-(t/7));
	}
}
