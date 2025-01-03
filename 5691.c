#include <stdio.h>

int main()
{
	int a, b;

	while(1)
	{
		scanf("%d %d", &a, &b);
		if(!a)	break;
		a<<=1;
		printf("%d\n", a-b);
	}
}
