#include <stdio.h>

int main()
{
	int buf=1, i, step;
	long n;

	scanf("%ld", &n);

	for(step=0; n/10 != 0; ++step)
	{
		while(n != 0)
		{
			buf*=(n%10);
			n/=10;
		}
		n=buf;
		buf=1;
	}
	printf("%d", step);
}


