#include <stdio.h>

int curve(int x, int y)
{
	if(x > y)	return 2*y-1;
	else 		return 2*x-2;
}

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);

	printf("%d", curve(m, n));
}
