#include <stdio.h>

int main()
{
	double v;
	int t;
	char u[3];

	scanf("%d", &t);

	while(t--)
	{
		scanf("%lf %s", &v, u);

		if(u[0] == 'k')			v*=2.2046, u[0]='l', u[1]='b';
		else if(u[0] == 'g')	v*=3.7854, u[0]='l';
		else if(u[1] == 'b')	v*=0.4536, u[0]='k', u[1]='g';
		else					v*=0.2642, u[0]='g';

		printf("%.4lf %s\n", v, u);
	}
}
