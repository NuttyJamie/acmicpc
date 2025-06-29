#include <stdio.h>

int main()
{
	int n, i=1;

	scanf("%d", &n);

	while(i*i <= n) ++i;

	printf("The largest square has side length %d.", --i);
}
