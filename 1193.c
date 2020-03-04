#include <stdio.h>

int main()
{
	int X, i=0, sum=0;

	scanf("%d", &X);
 
	while(sum<X)
	{
		i++;
		sum+=i;
	}

	if(i%2==0)
		printf("%d/%d", i-sum+X, sum-X+1);
	else
		printf("%d/%d", sum-X+1, i-sum+X);
}
