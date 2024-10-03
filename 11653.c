#include <stdio.h>

int main()
{
	int n, x=2;

	scanf("%d", &n);

	while(x <= n)
	{
		if(n%x == 0)	
		{
			n/=x;
			printf("%d\n", x);
		}
		else	++x;
	}
}

