#include <stdio.h>

int main()
{
	int t, n, a, b, c, x;

	scanf("%d", &t);

	for(; t; t--, x=0)
	{
		scanf("%d", &n);
		
		while(n--)
		{
			scanf("%d%d%d", &a, &b, &c);
			if(a > 0 || b > 0 || c > 0)
				x+=(a > b && a > c)?	a:(b > c)?	b:c;
		}
		printf("%d\n", x);
	}
}
