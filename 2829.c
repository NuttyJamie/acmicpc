#include <stdio.h>

int main()
{
	int N, i, count=-1;

	scanf("%d", &N);

	for(i=0; i*5<N; ++i)
	{
		if((N%5+5*i)%3==0)
		{
			count=(N/5-i)+(N%5+5*i)/3;
			break;
		}
	}

	printf("%d", count);
}
