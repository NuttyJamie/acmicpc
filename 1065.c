#include <stdio.h>

int isHansu(int n)
{
	if(n<100) 			return 1;
	else if(n==1000)	return 0;
	if(n%10-(n/10)%10==(n/10)%10-n/100) return 1;
	else 								return 0;
}

int main()
{
	int N, i, count=0;

	scanf("%d", &N);

	for(i=1; i<=N; ++i)
	{
		if(isHansu(i))		count++;
	}
	printf("%d", count);
}
