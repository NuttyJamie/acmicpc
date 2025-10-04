#include <stdio.h>

int main()
{
	int n, m, i, j;
	char s[10][21];

	scanf("%d %d", &n, &m);

	m+=n;
	for(i=0; i < m; ++i)
		scanf("%s", &s[i]);

	for(i=0; i < n; ++i)
		for(j=n; j < m; ++j)
			printf("%s as %s\n", s[i], s[j]);
}
