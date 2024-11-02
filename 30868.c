#include <stdio.h>

int main()
{
	int t, n;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);
		while(n > 4)
		{
			printf("++++ ");
			n-=5;
		}
		while(n)
		{
			printf("|");
			--n;
		}
		putchar('\n');
	}
}
