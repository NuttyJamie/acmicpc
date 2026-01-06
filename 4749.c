#include <stdio.h>
#include <string.h>

int main()
{
	double a, r;
	int i=0;
	char u[5], v[52], queue[1000][52];

	while(1)
	{
		scanf("%lf %s %lf ", &a, u, &r);

		if(a < 0)	break;

		fgets(v, 52, stdin);
		v[strcspn(v, "\n")]=0;

		if(a*100/r >= 1)	printf("%s %.1lf %s %.0lf%%\n", v, a, u, a*100/r);
		else				strncpy(queue[i++], v, 52);
	}

	puts("Provides no significant amount of:");
	for(int j=0; j < i; ++j)
		printf("%s\n", queue[j]);
}
