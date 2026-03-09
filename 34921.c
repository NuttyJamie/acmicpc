#include <stdio.h>

int main()
{
	int a, t;

	scanf("%d %d", &a, &t);

	a=((25-a+t)<<1)+10;
	printf("%d", (a < 0)? 0:a);
}
