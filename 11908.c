#include <stdio.h>

int main()
{
	int n, c, max=0, sum=0;

	scanf("%d", &n);
	for(; n > 0; --n)
	{
		scanf("%d", &c);
		max=(!max || c > max)? c:max;
		sum+=c;
	}
	printf("%d", sum-max);
}

