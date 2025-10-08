#include <stdio.h>

int main()
{
	int pattern[5]={0};
	int t, a, b, i, d;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &a, &b);

		pattern[0]=a%10;
		for(i=1, d=a*a%10; d != a%10 && i < 5; d%=10, ++i)
		{
			pattern[i]=d;
			d*=a;
		}

		if(b%i-1 < 0) 	b=i-1;
		else			b=b%i-1;
		printf("%d\n", (pattern[b])? pattern[b]:10);
	}
}
