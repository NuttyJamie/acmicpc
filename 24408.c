#include <stdio.h>

int main()
{
	int n, i, s, flag=1;

	scanf("%d %d", &n, &i);


	while(--n)
	{
		if(flag)	scanf("%d", &s);
		else
		{
			scanf("%d", &i);
			flag=1;
			continue;
		}

		if(!(s%i))
		{
			flag=0;
			printf("%d\n", s);
		}
	}
}
