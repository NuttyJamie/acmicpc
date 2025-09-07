#include <stdio.h>

int main()
{
	int n, m, i, j;
	char b[11];
	char c;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)
	{
		scanf("%s", b);

		for(j=m-1; j >= 0; --j)
			putchar(b[j]);
		putchar('\n');
	}
}
