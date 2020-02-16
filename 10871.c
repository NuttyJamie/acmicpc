#include <stdio.h>

int main()
{
	int N, X;
	int buffer, i;

	scanf("%d%d", &N, &X);

	for(i=0; i<N; ++i)
	{
		scanf("%d", &buffer);

		if(buffer<X)	printf("%d ", buffer);
	}
}

