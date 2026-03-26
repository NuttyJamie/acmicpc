#include <stdio.h>

int main()
{
	int m, b;

	scanf("%d", &m);

	while(m--)
	{
		scanf("%d", &b);

		printf("%d ", b);

		while(--b)
		{
			scanf("%*d");
			--m;
		}
	}
}
