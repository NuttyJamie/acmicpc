#include <stdio.h>

int main()
{
	int n, i;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &i);

		printf("%d %d\n", i, i);
	}
}