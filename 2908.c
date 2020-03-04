#include <stdio.h>

int revnum(int num)
{
	return ((num%10)*100)+(((num/10)%10)*10)+num/100;
}
int main()
{
	int N, M;

	scanf("%d%d", &N, &M);

	N=revnum(N);
	M=revnum(M);
	if(N>M)
		printf("%d", N);
	else 
		printf("%d", M);
}
