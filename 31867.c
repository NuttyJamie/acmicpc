#include <stdio.h>

int main()
{
	char i;
	int n, odd=0;

	scanf("%d ", &n);
	while((i=getchar()) != EOF)
		if(i & 1)	++odd;
	odd<<=1;
	if(odd == n)	printf("-1");
	else			putchar((odd < n)?	'0':'1');
}

