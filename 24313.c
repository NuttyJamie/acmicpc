#include <stdio.h>

int main()
{
	int a1, a0, c, n0, h;

	scanf("%d %d %d %d", &a1, &a0, &c, &n0);

	if(c-a1 == 0)	
	{
		if(a0 <= 0) 
			putchar('1');
		else
			putchar('0');
	}

	else if(c-a1 > 0)
	{
		a1=a0/(c-a1);
		h=n0-a1;
		while(n0++ >= a1)
		{
			if(h <= n0-a1)
			{
				putchar('1');
				return 0;
			}
		}
		putchar('0');
		return 0;
	}
	else
	{
		a1=a0/(c-a1);
		h=n0-a1;
		while(n0++ <= a1)
		{
			if(h > n0-a1)
			{
				putchar('1');
				return 0;
			}
		}
		putchar('0');
		return 0;
	}
}

/*	n >= (a1*n+a0)/c
 *	n >= a1*n/c + a0/c
 *
 *	n-(a1*n/c) >= a0/c
 *	(n*c-a1*n)/c= n(c-a1) >= a0
 * 	n(c-a1) >= a0
 	i)	n >= a0/(c-a1)
	ii) n <= a0/(c-a1) 
		n <= a1
		n-a1 <= 0
 */
