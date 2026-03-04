#include <stdio.h>

int main()
{
	int n, a, b, suma=0, sumb=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &a, &b);

		if(a == b)
		{
			suma+=a;
			sumb+=b;
		}
		else if(a < b)	sumb+=a+b;
		else			suma+=a+b;
	}

	printf("%d %d", suma, sumb);
}
