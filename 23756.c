#include <stdio.h>

int main()
{
	int n, a0, an, clk, counterclk, sum=0;

	scanf("%d %d", &n, &a0);

	while(n--)
	{
		scanf("%d", &an);

		if(a0 < an)
		{
			clk=an-a0;
			counterclk=360-an+a0;
		}
		else
		{
			clk=360-a0+an;
			counterclk=a0-an;
		}

		sum+=(clk < counterclk)?	clk:counterclk;
		a0=an;
	}

	printf("%d", sum);
}
