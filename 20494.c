#include <stdio.h>

int main()
{
	char b;
	int n, count=0;

	scanf("%d ", &n);

	while(n--)
		while((b=getchar()) != '\n')	++count;
	printf("%d", count);
}
