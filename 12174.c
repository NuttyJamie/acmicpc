#include <stdio.h>

int main()
{
	char c;
	int t, b;

	scanf("%d", &t);

	for(int i=1; i <= t; ++i)
	{
		scanf("%d ", &b);
		printf("Case #%d: ", i);
		while(b--)
		{
			c=0;
			for(int j=0; j < 8; ++j)
			{
				c|=((getchar()^'N')>>2);
				if(j != 7) c<<=1;
			}
			putchar(c);
		}
		putchar('\n');
	}
}
