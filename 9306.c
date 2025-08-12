#include <stdio.h>

int main()
{
	int x;
	char first[21], last[21];

	scanf("%d", &x);

	for(int i=1; i <= x; ++i)
	{
		scanf("%s %s", first, last);

		printf("Case %d: %s, %s\n", i, last, first);
	}
}
