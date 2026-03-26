#include <stdio.h>

int main()
{
	int n, flag=0;

	scanf("%d", &n);

	flag=(n%7)?	2:3;

	while(n && (n%10 != 7)) n/=10;

	if(!n)	flag-=2;

	printf("%d", flag);
}
