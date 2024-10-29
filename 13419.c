#include <stdio.h>

int main()
{
	char c[27];
	int t, i=0, len=0;

	for(scanf("%d", &t); t > 0; --t, i=0, len=0)
	{
		scanf("%s", c);

		while(c[i++])	++len;

		for(i=0; i < len; i+=2)
			putchar(c[i]);
		if(len%2)
		{
			for(i=1; i < len; i+=2)
				putchar(c[i]);
		}
		putchar('\n');

		for(i=1; i < len; i+=2)
			putchar(c[i]);
		if(len%2)
		{
			for(i=0; i < len; i+=2)
				putchar(c[i]);
		}
		putchar('\n');
	}
}
