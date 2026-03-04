#include <stdio.h>

int main()
{
	double x;
	int t;
	char op;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%lf", &x);

		while((op=getchar()) != '\n')
		{
			switch(op)
			{
				case '@': x*=3; break;
				case '%': x+=5; break;
				case '#': x-=7; break;
			}
		}

		printf("%.2lf\n", x);
	}
}
