#include <stdio.h>

int main()
{
	char n;

	scanf("%d", &n);
	if(n%2)	puts("Either");
	else 	puts(((n>>1)%2)?	"Odd":"Even");
}
