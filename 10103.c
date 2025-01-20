#include <stdio.h>

int main()
{
	char n, x, y=100;

	x=y;
	scanf("%d", &n);
	while(n--)
	{
		char d1, d2;
		scanf(" %c %c", &d1, &d2);
		if(d1 == d2)	continue;
		else if(d1 > d2)	y-=d1-'0';
		else				x-=d2-'0';
	}
	printf("%d\n%d", x, y);
}
