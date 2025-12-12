#include <stdio.h>

int main()
{
	int x, n, p, v=0;

	scanf("%d %d", &x, &n);

	for(int i=n; i; --i)
	{
		scanf("%d", &p);
		v+=p;
	}

	printf("%d", x*n-v+x);
}
