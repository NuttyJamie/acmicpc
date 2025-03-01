#include <stdio.h>

int main()
{
	char op, x=0;
	int m, s=0;

	scanf("%d ", &m);

	while(m--)
	{
		getchar();
		op=getchar();
		if(op == 'l')
		{
			s|=~0;
			while(getchar() != '\n');
		}
		else if(op == 'm')
		{
			s=0;
			while(getchar() != '\n');
		}
		else
		{
			while(getchar() != ' ');
			for(char t; (t=getchar()) != '\n'; )
			{
				x*=10;
				x+=t-'0'; 
			}

			switch(op)
			{
				case 'd':
					s|=1<<x;
					break;
				case 'e':
					s&=~(1<<x);
					break;
				case 'h':
					putchar((s & 1<<x)?	'1':'0');
					putchar('\n');
					break;
				case 'o':
					s^=(1<<x);
					break;
				case 'l':
					s|=~0;
					break;
				case 'm':
					s=0;
			}
		}
		x=0;
	}
}
