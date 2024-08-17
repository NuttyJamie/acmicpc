#include <stdio.h>

int main()
{
	int n, k, x=0;

	scanf("%d %d", &n, &k);

	while(k != 0)
	{
		++x;
		if(n%x == 0) --k;
		if(x > n)
		{
			x=0;
			break;
		}
	}

	printf("%d", x);
}
