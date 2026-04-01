#include <stdio.h>

int main()
{
	int n, m, k;

	scanf("%d %d %d", &n, &m, &k);

	while(k--)
	{
		if(n > m*2)	--n;
		else 		--m;
	}

	printf("%d", (n > m*2)? m:n/2);
}
