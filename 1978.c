#include <stdio.h>

int main()
{
	int N, i, j, num, count=0;		

	scanf("%d", &N);

	for(i=0; i<N; ++i)
	{
		scanf("%d", &num);

		if(num<2)	++count;

		for(j=2; j<=num/2; ++j)
		{
			if(num%j==0) 
			{
				++count;
				break;
			}
		}
	}
	printf("%d", N-count);
}
