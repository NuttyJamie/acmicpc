#include <stdio.h>

int main()
{
	int n, r, e, c;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d %d", &r, &e, &c);

		if(r == e-c)		puts("does not matter");
		else if(r < e-c)	puts("advertise");
		else				puts("do not advertise");
	}
}
