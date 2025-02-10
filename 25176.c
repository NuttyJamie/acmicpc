#include <stdio.h>

int main()
{
	int n, s=1;

	scanf("%d", &n);

	while(n)	s*=n--;	

	printf("%d", s);
}
