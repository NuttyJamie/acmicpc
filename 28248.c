#include <stdio.h>

int main()
{
	int p, c;

	scanf("%d %d", &p, &c);
	printf("%d", (p > c)?	50*p-10*c+500:50*p-10*c);
}
