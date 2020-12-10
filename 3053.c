#include <stdio.h>
#include <math.h>

int main()
{
	int R;
	const double PI=acos(-1);

	scanf("%d", &R);

	printf("%lf\n%lf", R*R*PI, (double)R*R*2);
}
