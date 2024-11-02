#include <stdio.h>

int main()
{
	int n, t, sum=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &t);
		sum+=t+8;
	}
	sum-=8;
	printf("%d %d", sum/24, sum%24);
}
