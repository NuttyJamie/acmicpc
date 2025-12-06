#include <stdio.h>

int main()
{
	int n, f, x;

	scanf("%d %d", &n, &f);

	x=n/100;
	x*=100;

	while(x%f)	++x;

	x%=100;

	printf("%02d", x);
}
