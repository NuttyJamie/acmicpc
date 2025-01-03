#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	printf("%lf\n%lf", (double)100/a, (double)100/(100-a));
}
