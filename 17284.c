#include <stdio.h>

int main()
{
	char n;
	int t=5000;

	while((n=getchar()) != EOF)
	{
		switch(n)
		{
			case '1':
				t-=500;
				break;
			case '2':
				t-=800;
				break;
			case '3':
				t-=1000;
				break;
			default:
				continue;
		}
	}
	printf("%d", t);
}
