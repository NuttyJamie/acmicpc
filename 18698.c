#include <stdio.h>

int main()
{
	char c;
	int t, s=0;

	scanf("%d ", &t);

	while(t--)
	{
		while((c=getchar()) != '\n') 
		{
			if(c == 'U')	++s;
			else
			{
				while(getchar() != '\n'){}
				break;
			}
		}
		printf("%d\n", s);
		s=0;
	}
}
