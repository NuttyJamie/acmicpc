#include <stdio.h>

int main()
{
	int t, n, p1, p2;
	char x1, x2;

	scanf("%d", &t);

	while(t--)
	{
		p1=p2=0;

		scanf("%d ", &n);

		while(n--)
		{
			scanf("%c %c ", &x1, &x2);
			if(x1 == x2)	continue;
			else if(((x1 == 'R') && (x2 == 'S')) ||
					((x1 == 'S') && (x2 == 'P')) ||
					((x1 == 'P') && (x2 == 'R')))
				++p1;
			else 
				++p2;
		}

		if(p1 == p2)	puts("TIE");
		else 			printf("Player %d\n", ((p1 > p2)? 1:2));
	}
}
