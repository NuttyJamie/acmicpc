#include <stdio.h>

int main()
{
	int t, a, b, i;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &a, &b);

		if(b < a)
		{
			b^=a;
			a^=b;
			b^=a;
		}

		for(i=1; (b*i)%a; ++i);
		printf("%d\n", b*i);
	}
}
