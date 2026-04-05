#include <stdio.h>
#include <math.h>

int main()
{
	int n, i=1, j=1, count=0;

	scanf("%d", &n);

	do
	{
		if(i*j <= n)
		{
			++j;
			++count;
		}
		else
		{
			++i;
			j=i;
		}
	}while(i <= sqrt(n));

	printf("%d", count);
}
