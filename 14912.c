#include <stdio.h>

int main()
{
	int n, d, count=0;

	scanf("%d %d", &n, &d);

	while(n)
	{
		int t=n;
		while(t)
		{
			if(t%10 == d)	++count;
			t/=10;
		}
		--n;
	}
	printf("%d", count);
}
