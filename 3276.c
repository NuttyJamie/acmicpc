#include <stdio.h>

int main()
{
	int i, n;

	scanf("%d", &n);

	for(i=1; i*i < n && i < 11; ++i);

	if(i*(i-1) >= n)	printf("%d %d", i, i-1);
	else				printf("%d %d", i, i);
}
