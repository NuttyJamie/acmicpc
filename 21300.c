#include <stdio.h>

int main()
{
	int n, i=6, sum=0;
	
	while(i--)
	{
		scanf("%d", &n);
		sum+=n;
	}
	printf("%d", sum*5);
}
