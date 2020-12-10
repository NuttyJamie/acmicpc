#include <stdio.h>

int main()
{
	int a, b, c;

	while(1)
	{
		scanf("%d%d%d", &a, &b, &c);

		if(a==0) break;
		if(a*a+b*b==c*c || a*a==b*b+c*c || b*b==a*a+c*c)	puts("right");
		else	puts("wrong");
	}
}
