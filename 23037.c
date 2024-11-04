#include <stdio.h>

int main()
{
	char n;
	int sum=0;

	while((n=getchar()) != '\n')
	{
		n-=48;
		sum+=n*n*n*n*n;
	}
	printf("%d", sum);
}
