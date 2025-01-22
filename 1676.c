#include <stdio.h>

int main()
{
	int n, x=0;

	scanf("%d", &n);

	for(int i=1; i <= n; ++i)
		for(int d=i; d; )
		{
			if(!(d%5))
			{
				++x;
				d/=5;
			}
			else break;
		}

	printf("%d", x);
}
