#include <stdio.h>
int main()
{
	char table[100][101]={0};
	int i, j, n, m;

	scanf("%d %d", &n, &m);

	for(i=0; i < n; ++i)	scanf("%s", table[i]);

	for(i=0; i < m; ++i)
	{
		for(j=0; j < n; ++j)
			if(table[j][i] == 'O')	break;
		if(j == n)
		{
			printf("%d", i+1);
			break;
		}
	}
	if(i == m)	puts("ESCAPE FAILED");
}
