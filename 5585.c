#include <stdio.h>

int main()
{
	int n, count=0;

	scanf("%d", &n);

	n=1000-n;
	if(n >= 500)
	{
		count+=n/500;
		n%=500;
	}
	if(n >= 100)
	{
		count+=n/100;
		n%=100;
	}
	if(n >= 50)
	{
		count+=n/50;
		n%=50;
	}
	if(n >= 10)
	{
		count+=n/10;
		n%=10;
	}
	if(n >= 5)
	{
		count+=n/5;
		n%=5;
	}
	if(n >= 1) count+=n;
	printf("%d", count);
}
