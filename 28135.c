#include <stdio.h>

int main()
{
	int d, n, i=1, current=1;

	scanf("%d", &n);

	while(current != n)
	{
		for(d=1; current/d > 9; d*=10)
		{
			if(current/d%100 == 50)
			{
				++i;
				break;
			}
		}
		++current;
		++i;
	}
	printf("%d", i);
}
