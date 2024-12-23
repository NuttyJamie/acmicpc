#include <stdio.h>

int main()
{
	char c;
	int n, x, i=0, flag=0;

	scanf("%d ", &n);
	while(n--)
	{
		i=(flag)?	--i:++i;
		if(i < 1)	i+=12;
		else if(i > 12) i-=12;
		scanf("%c%*[^0-9]%d ", &c, &x);
		if(c != 'H' && x == i) 
		{
			printf("%d YES\n", i);
			continue;
		}
		else if(c == 'H' && x != i) flag=(!flag)?	1:0;
		printf("%d NO\n", i);
	}
}
