#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	int i=1;
	char x;

	while(1)
	{
		scanf("%lf %lf %lf", &a, &b, &c);

		if(!a) break;

		printf("Triangle #%d\n", i++);
		if(a < 0)
		{
			x='a';

			if(b < c) a=sqrt(c*c-b*b);
			else
			{
				puts("Impossible.\n");
				continue;
			}
		}
		else if(b < 0)
		{
			x='b';

			if(a < c) b=sqrt(c*c-a*a);
			else
			{
				puts("Impossible.\n");
				continue;
			}
		}
		else
		{
			x='c';

			c=sqrt(a*a+b*b);
		}

		printf("%c = %.3lf\n\n", x, ((x == 'a')?	a:(x == 'b')?	b:c));
	}
}
