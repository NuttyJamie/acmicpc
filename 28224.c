#include <stdio.h>

int main()
{
	int n, p, d;

	scanf("%d %d", &n, &p);

	--n;
	while(n--)
	{
		scanf("%d", &d);

		p+=d;
	}

	printf("%d", p);
}
