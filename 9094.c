#include <stdio.h>

int main()
{
	int t, n, m, count=0;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &m);
		for(int b=2; b < n; ++b)
			for(int a=1; a < b; ++a)
				if(!((a*a+b*b+m)%(a*b)))	++count;
		printf("%d\n", count);
		count=0;
	}
}
