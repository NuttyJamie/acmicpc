#include <stdio.h>

int sumplace(int n)
{
	int sum=0;

	while(n != 0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main()
{
	int n, i;

	scanf("%d", &n);

	for(i=1; i < n; ++i)
	{
		if(i+sumplace(i) == n)	
		{
			printf("%d", i);
			break;
		}
	}
	if(i == n) putchar('0');
}

