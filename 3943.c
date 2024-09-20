#include <stdio.h>

int maxofHailstone(int n)
{
	static int max=0;
	int result;
	max=(max > n)?	max:n;
	if(n == 1)
	{
		result=max;
		max=0;
		return result;
	}
	else if(n%2)
	{
		n*=3;
		n+=1;
	}
	else n/=2;
	maxofHailstone(n);
}

int main()
{
	int n, t;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);

		printf("%d\n", maxofHailstone(n));
	}
}
