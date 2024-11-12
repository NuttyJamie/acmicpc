#include <stdio.h>

int main()
{
	int x, n=1, total=64, half=32;

	scanf("%d", &x);

	for(;(x != 1) && (total != x); half/=2)
	{
		if(total > x)
		{
			total-=half;
		}
		else
		{
			total+=half;
			++n;
		}
	}
	printf("%d", n);
}
