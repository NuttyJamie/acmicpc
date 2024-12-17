#include <stdio.h>

double pow(double x, int y)
{
	if(y == 1)	return x;
	return x*pow(x, y-1);
}

int main()
{
	double x;

	while(1)
	{
		scanf("%lf", &x);
		if(!x)	break;
		else if(x == 1)
		{
			puts("5.00");
			continue;
		}
		printf("%.2lf\n", (pow(x, 5)-1)/(x-1));
	}
}
