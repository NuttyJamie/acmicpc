#include <stdio.h>

int main()
{
	int n, i;

	scanf("%d", &n);

	for(i=2; i < 10; ++i)
	{
		if(n < 10 || !(n%i) && n/i < 10)
		{
			putchar('1');
			return 0;
		}
	}
	putchar('0');
}
