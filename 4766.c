#include <stdio.h>

int main()
{
	double t, p;

	scanf("%lf", &p);

	while(1)
	{
		scanf("%lf", &t);

		if(t == 999) break;

		printf("%.2lf\n", t-p);

		p=t;
	}
}
