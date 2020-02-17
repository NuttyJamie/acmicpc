#include <stdio.h>

int main()
{
	int N, i, max=-1, x, sum=0;

	scanf("%d", &N);

	for(i=0; i<N; ++i)
	{
		scanf("%d", &x);
		sum+=x;
		if(x>max)	max=x;
	}

	printf("%lf", (double)sum/(max*N)*100);
}
