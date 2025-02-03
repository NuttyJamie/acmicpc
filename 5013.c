#include <stdio.h>

int main()
{
	char ki, prev=0;
	int n, win;

	scanf("%d ", &n);

	win=n;
	while(n--)
	{
		while((ki=getchar()) != '\n')
		{
			if(ki == 'D')
			{
				if(prev == 'C')
				{
					--win;
					while((ki=getchar()) != '\n')
					prev=0;
					break;
				}
			}
			prev=ki;
		}
		prev=0;
	}
	printf("%d", win);
}
