#include <stdio.h>

int main()
{
	double p, total;
	int t;

	scanf("%d", &t);

	while(t--)
	{
		total=0;
		scanf("%lf", &p);
		total+=p*350.34;
		scanf("%lf", &p);
		total+=p*230.90;
		scanf("%lf", &p);
		total+=p*190.55;
		scanf("%lf", &p);
		total+=p*125.30;
		scanf("%lf", &p);
		total+=p*180.90;
		printf("$%.2lf\n", total);
	}
}
