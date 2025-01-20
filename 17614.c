#include <stdio.h>

int main()
{
	int n, sum=0;

	scanf("%d", &n);

	while(n)
	{
		for(int d=n--; d; d/=10)
		{
			int t=d%10;
			if(t == 3 || t == 6 || t == 9) ++sum;
		}
	}
	printf("%d", sum);
}
