#include <stdio.h>

int main()
{
	int n, d1, d2, d3, r, max=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d %d", &d1, &d2, &d3);

		if((d1 == d2) && (d2 == d3))	r=d1*1000+10000;
		else if((d1 == d2) || (d2 == d3) || (d1 == d3))
		{
			if((d1 == d2) || (d1 == d3))
				r=d1*100+1000;
			else
				r=d2*100+1000;
		}
		else
		{
			if((d1 > d2) && (d1 > d3))		r=d1*100;
			else if((d2 > d3) && (d2 > d1))	r=d2*100;
			else							r=d3*100;
		}
		
		if(max < r)	max=r;
	}

	printf("%d", max);
}
