#include <stdio.h>

int main()
{
	int a, i=5, sum=0;

	while(i--)
	{
		scanf("%d", &a);
		sum+=a;
	}
	printf("%d", sum);
}
