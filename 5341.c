#include <stdio.h>

int main()
{
	int n;

	while(1)
	{
		scanf("%d", &n);
		if(!n)	break;
		printf("%d\n", n*(n+1)/2);
	}
}
