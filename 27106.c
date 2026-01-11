#include <stdio.h>

int main()
{
	int p;

	scanf("%d", &p);

	p=100-p;

	printf("%d ", p/25);
	p%=25;
	printf("%d ", p/10);
	p%=10;
	printf("%d %d", p/5, p%5);
}
