#include <stdio.h>

int main()
{
	int m, f;

	while(1)
	{
		scanf("%d %d", &m, &f);

		if(!m)	break;
		printf("%d\n", m+f);
	}
}
