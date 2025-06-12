#include <stdio.h>

int main()
{
	int n;
	char keypad[10][4]=
	{
		{' '},
		{'!'},
		{'a', 'b', 'c'},
		{'d', 'e', 'f'},
		{'g', 'h', 'i'},
		{'j', 'k', 'l'},
		{'m', 'n', 'o'},
		{'p', 'q', 'r', 's'},
		{'t', 'u', 'v'},
		{'w', 'x', 'y', 'z'}
	};
	char msg[17];

	scanf("%d", &n);
	getchar();

	for(int i=0; i < n; ++i)
	{
		fgets(msg, 17, stdin);
		printf("Case #%d: ", i+1);

		int x=0, y=0, prev=-1;

		for(int j=0; msg[j] != '\n'; ++j)
		{
			while((x < 10) && (keypad[x][0] <= msg[j])) ++x;
			if(x)	--x;
			if(prev == x)	putchar(' ');
			while(keypad[x][y] < msg[j])
			{
				putchar(x+'0');
				++y;
			}
			putchar(x+'0');
			prev=x;
			x=y=0;
		}
		putchar('\n');
	}
}
