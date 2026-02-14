#include <stdio.h>

int main()
{
	int n, i=1;
	char l, c1, c2;

	for(;;)
	{
		scanf("%c %c", &c1, &c2);

		if(c1 == '#')	break;

		scanf("%d ", &n);

		printf("Case %d\n", i++);
		while(n--)
		{
			while((l=getchar()) != '\n')
			{
				putchar(((l == c1 || l == c2) ||
						(l+32 == c1 || l+32 == c2))?	'_':l);
			}
			putchar(l);
		}
		putchar('\n');
	}
}

