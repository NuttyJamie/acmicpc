#include <stdio.h>

int main()
{
	int N, x=0, count=0;

	scanf("%d", &N);

	x=N;

	do
	{
		x=(x%10*10)+((x/10+x%10)%10);
		//printf("x is %d\n", x);
		count++;
	}while(x!=N);

	printf("%d\n", count);
}
