#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, d, k, i;

	scanf("%d %d %d", &a, &d, &k);

	if((k-a)%d)							putchar('X');
	else if(a == k)						putchar('1');
	else if(abs(k-(a+d)) < abs(k-a))	printf("%d", abs((k-a)/d)+1);
	else								putchar('X');
}
