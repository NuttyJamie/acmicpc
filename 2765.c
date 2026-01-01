#include <stdio.h>
#define PI 3.1415927

int main()
{
	double inch, sec, mile, hour;
	int rotate, i=1;

	while(1)
	{
		scanf("%lf %d %lf", &inch, &rotate, &sec);

		if(!rotate)	break;

		mile=PI*inch*rotate/(5280*12);
		hour=sec/3600;

		printf("Trip #%d: %.2lf %.2lf\n", i++, mile, mile/hour);
	}
}
