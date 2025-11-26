#include <stdio.h>

int main()
{
	int t, n, i;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);

		i=0;

		while(n)
		{
			if(n & 1) printf("%d ", i);
			n>>=1;
			++i;
		}
	}
}
