#include <stdio.h>

int main()
{
	int N, i;
	
	scanf("%d", &N);

	for(i=1; N>=i; --N)
	{
		printf("%d\n", N);
	}
}
