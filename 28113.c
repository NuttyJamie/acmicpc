#include <stdio.h>

int main()
{
	int n, a, b;

	scanf("%d %d %d", &n, &a, &b);

	if(a == b)	puts("Anything");
	else 		puts((a < b)? "Bus":"Subway");
}
