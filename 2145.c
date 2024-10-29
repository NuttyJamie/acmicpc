#include <stdio.h>

int main()
{
	int n, sum;

	while(1)
	{
		scanf("%d", &n);
		if(!n)	break;

		for(; n > 9; sum=0)
		{
			for(; n; n/=10)
				sum+=n%10;
			n=sum;
		}
		printf("%d\n", n);
	}
}

