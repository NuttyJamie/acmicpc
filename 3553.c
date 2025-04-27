#include <stdio.h>

int main()
{
	int n, d, l=0; 

	scanf("%d %d", &n, &d);

	for(int t=d; t; t/=10)
		++l;

	if(n < l)	puts("No solution");
	else
	{
		printf("%d", d);
		n-=(l-1);
		while(--n)	putchar('0');
	}
}
