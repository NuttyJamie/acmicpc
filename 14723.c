#include <stdio.h>

int main()
{
	int n, a, b, d, i=1;

	a=b=d=1;

	scanf("%d", &n);

	while(i < n)
	{
		++a;
		i+=d;
		++d;
	}
	
	if(i > n)
	{
		--a;
		i-=d-1;
		for(b=1; i < n; ++i)	++b, --a;
	}
	printf("%d %d", a, b);
}
