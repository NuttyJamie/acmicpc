#include <stdio.h>

int main()
{
	int n, s, m, slowest=0;

	scanf("%d %d", &n, &s);

	while(n--)
	{
		scanf("%d", &m);

		if(slowest < m)	slowest=m;
	}

	s*=slowest;
	printf("%d", s/1000+(s%1000?	1:0));
}
