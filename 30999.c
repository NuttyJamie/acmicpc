#include <stdio.h>

int main()
{
	char ox[100];
	int n, m, count, total=0;

	scanf("%d %d", &n, &m);

	while(n--)
	{
		count=0;
		scanf("%s", ox);

		for(int i=0; i < m; ++i)
			if(ox[i] == 'O')	++count;

		if(m/2 < count)	++total;
	}

	printf("%d", total);
}
