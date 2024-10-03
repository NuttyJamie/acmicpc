#include <stdio.h>

int main()
{
	int n, x, sum=0;

	for(;;sum=0)
	{
		scanf("%d", &n);
		if(n == -1)	break;

		for(x=1; x < n; ++x)
			sum+=(n%x == 0)?	x:0;

		if(sum == n)
		{
			printf("%d = 1", n);
			for(x=2; x < n; ++x)
				if(n%x == 0) printf(" + %d", x);
			putchar('\n');
		}
		else	printf("%d is NOT perfect.\n", n);
	}
}
