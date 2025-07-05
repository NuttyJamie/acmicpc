#include <stdio.h>

int main()
{
	char x[21], y[21];
	int t, i;

	scanf("%d", &t);

	while(t--)
	{
		int d;

		scanf("%s %s", x, y);

		printf("Distances:");

		for(i=0; x[i] != '\0'; ++i)
		{
			d=y[i]-x[i];

			if(d < 0) 	d+=26;

			printf(" %d", d);
		}

		putchar('\n');
	}
}
