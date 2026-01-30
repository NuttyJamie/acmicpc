#include <stdio.h>

int main()
{
	int n, x;

	while(1)
	{
		scanf("%d", &n);

		if(!n)	break;

		x=0;
		for(int i=0; n != i; ++i)
			x+=(n-i)*(n-i);
		printf("%d\n", x);
	}

}
