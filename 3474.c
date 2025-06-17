#include <stdio.h>

int main()
{
	int t, n, x;

	scanf("%d", &t);

	while(t--)
	{
		x=0;
		scanf("%d", &n);

		while(n)
		{
			n/=5;
			x+=n;
		}

		printf("%d\n", x);
	}
}
