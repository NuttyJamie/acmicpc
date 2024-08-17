#include <stdio.h>

int main()
{
	int a, b;

	while(1)
	{
		scanf("%d %d", &a, &b);

		if(a == 0) return 0;
		else if(a < b && b%a == 0)	puts("factor");
		else if(a > b && a%b == 0)	puts("multiple");
		else 						puts("neither");
	}
}


