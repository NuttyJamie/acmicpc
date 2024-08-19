#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if(a >= b && a >= c)		while(a >= b+c)	--a;
	else if(b >= a && b >= c) 	while(b >= a+c)	--b;
	else if(c >= a && c >= b) 	while(c >= a+b) --c;

	printf("%d", a+b+c);
}
