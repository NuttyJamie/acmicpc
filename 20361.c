#include <stdio.h>

int main()
{
	int x, k, a, b;

	scanf("%*d %d %d", &x, &k);

	while(k--)
	{
		scanf("%d %d", &a, &b);
		if(a == x)			x=b;
		else if(b == x)		x=a;
	}
	printf("%d", x);
}
