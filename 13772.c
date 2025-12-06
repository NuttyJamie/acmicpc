#include <stdio.h>

int main()
{
	int n, x;
	char c;

	scanf("%d ", &n);

	while(n--)
	{
		x=0;
		while((c=getchar()) != '\n')
		{
			switch(c)
			{
				case 'B':
					x+=2;
					break;
				case 'A':
				case 'D':
				case 'O':
				case 'P':
				case 'Q':
				case 'R':
					++x;
					break;
			}
		}
		printf("%d\n", x);
	}
}
