#include <stdio.h>

int main()
{
	double x, y;

	while(1)
	{
		scanf("%lf %lf", &x, &y);

		if(!x && !y)			break;
		else if(!x || !y)		puts("AXIS");
		else if(x > 0 && y > 0)	puts("Q1");
		else if(x < 0 && y > 0)	puts("Q2");
		else if(x < 0 && y < 0)	puts("Q3");
		else					puts("Q4");
	}
	puts("AXIS");
}
