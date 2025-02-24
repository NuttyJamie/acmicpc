#include <stdio.h>

int main()
{
	char quote[50][67];
	int n, r, i=0, j=0;

	scanf("%d ", &n);
	while(i < n) fgets(quote[i++], 67, stdin);

	scanf("%d", &r);

	while(r--)
	{
		scanf("%d", &i);

		printf("Rule %d: %s", i, (0 < i && i <= n)? quote[i-1]:"No such rule\n");
	}
}
