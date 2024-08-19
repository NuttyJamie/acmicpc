#include <stdio.h>

int main()
{
	int a, b, c;

	while(1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if(a == 0)	break;
		else if((a >= b+c) || (b >= a+c) || (c >= a+b))
			puts("Invalid");
		else if(a == b && b == c)				     puts("Equilateral");
		else if(a == b || b == c || a == c)		     puts("Isosceles");
		else									     puts("Scalene");
	}
}
