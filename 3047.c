#include <stdio.h>

int main()
{
	int n[3];
	int i, j;

	scanf("%d %d %d ", &n[0], &n[1], &n[2]);

	for(i=0; i < 2; ++i)
		for(j=1; j < 3; ++j)
		{
			if(n[i] > n[j])
			{
				n[i]^=n[j];
				n[j]^=n[i];
				n[i]^=n[j];
			}
		}

	for(i=3; i; --i)
		printf("%d ", n[getchar()-'A']);
}
