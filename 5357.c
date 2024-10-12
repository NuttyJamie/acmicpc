#include <stdio.h>

int main()
{
	char pre=0, now=0;
	int n;

	for(scanf("%d ", &n); n != 0; --n, pre=0)
	{
		while((now=getchar()) > '@')
		{
			if(pre != now)
			{
				putchar(now);
				pre=now;
			}
			else	continue;
		}
		putchar('\n');
	}
}

